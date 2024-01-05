<h1>0x0E. C - Structures, typedef</h1>

<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li> 0x0d. Structures.pdf </li>
<li>struct (C programming language) </li>
<li>Documentation: structures </li>
<li>0x0d. Typedef and structures.pdf </li>
<li>ypedef </li>
<li><strong>Programming in C</strong> by Stephen Kochan - <em>Chapter 8, Working with Structures p163-189</em> </li>
<li><a href="#" target="">The Lost Art of C Structure Packing</a> (<em>Advanced - not mandatory</em>)</li>
</ul>

<h2>Tasks</h2>
<p>1. Define a new type <code>struct dog</code> with the following elements:</p>

<ul>
<li><code>name</code>, type = <code>char *</code></li>
<li><code>age</code>, type = <code>float</code></li>
<li><code>owner</code>, type = <code>char *</code></li>
</ul>

<p>2. Write a function that initialize a variable of type <code>struct dog</code></p>

<ul>
<li>Prototype: <code>void init_dog(struct dog *d, char *name, float age, char *owner);</code></li>
</ul>

<p>3. Write a function that prints a <code>struct dog</code></p>

<ul>
<li>Prototype: <code>void print_dog(struct dog *d);</code></li>
<li>Format: see example bellow</li>
<li>You are allowed to use the standard library</li>
<li>If an element of <code>d</code> is <code>NULL</code>, print <code>(nil)</code> instead of this element. (if <code>name</code> is <code>NULL</code>, print <code>Name: (nil)</code>)</li>
<li>If <code>d</code> is <code>NULL</code> print nothing.</li>
</ul>
<p>4. Write a function that creates a new dog.</p>

<ul>
<li>Prototype: <code>dog_t *new_dog(char *name, float age, char *owner);</code></li>
<li>You have to store a copy of <code>name</code> and <code>owner</code></li>
<li>Return <code>NULL</code> if the function fails</li>
</ul>
