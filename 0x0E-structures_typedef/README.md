<h1 class="gap">0x0E. C - Structures, typedef</h1>
<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/giS4eNQT2BQ9RLK0PMhgJQ" title="0x0d. Structures.pdf" target="_blank">0x0d. Structures.pdf</a></li>
<li><a href="/rltoken/MinJEDOHpeZs31qaXU8v1w" title="struct (C programming language)" target="_blank">struct (C programming language)</a> </li>
<li><a href="/rltoken/Nexam-lEwrNHg2awV5Gv8g" title="Documentation: structures" target="_blank">Documentation: structures</a> </li>
<li><a href="/rltoken/TGQ3RopVP7CjUTzF-XDXUw" title="0x0d. Typedef and structures.pdf" target="_blank">0x0d. Typedef and structures.pdf</a></li>
<li><a href="/rltoken/aqqM2t7PLG5cyHaKwm5nBg" title="typedef" target="_blank">typedef</a> </li>
<li><strong>Programming in C</strong> by Stephen Kochan - <em>Chapter 8, Working with Structures p163-189</em></li>
<li><a href="/rltoken/emb4ohNT7XKi8Peep5lyeA" title="The Lost Art of C Structure Packing" target="_blank">The Lost Art of C Structure Packing</a> (<em>Advanced - not mandatory</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/qkcS8PT80wmgcNlCEdBzrQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are structures, when, why and how to use them</li>
<li>How to use <code>typedef</code></li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>printf</code>, <code>malloc</code>, <code>free</code> and <code>exit</code>. </li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
  <h2 class="gap">Tasks</h2>
<h3 class="panel-title">  0. Poppy </h3>
<p>Define a new type <code>struct dog</code> with the following elements:</p>

<ul>
<li><code>name</code>, type = <code>char *</code></li>
<li><code>age</code>, type = <code>float</code></li>
<li><code>owner</code>, type = <code>char *</code></li>
</ul>
<h3 class="panel-title"> 1. A dog is the only thing on earth that loves you more than you love yourself  </h3>
<p>Write a function that initialize a variable of type <code>struct dog</code></p>

<ul>
<li>Prototype: <code>void init_dog(struct dog *d, char *name, float age, char *owner);</code></li>
</ul>

