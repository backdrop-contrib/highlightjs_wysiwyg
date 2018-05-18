# code_syntax_highlighting_bundle

Adds a shortcode for using HighlightJS in the WYSIWYG editor.

## How To Use

1. Enable Bundle.

2. Edit a node using the WYSIWYG text filter. You'll see button with brackets that allows you to enter code syntax.

<img width="363" alt="screen shot 2018-05-18 at 2 38 01 pm" src="https://user-images.githubusercontent.com/3640707/40257012-c22b0bbe-5aa9-11e8-845c-6a772b0272ff.png">

3. Once the dialog window is open, you can choose the language and insert the code syntax. Then you will see a shortcode `[code lang="php"]$foo = "bar";[/code]` inserted into the body field with line breaks and indentation preserved.

4. Once saved, the code is rendered with syntax highlighting. You can change the theme by setting a variable, `drush vset csh_theme sunburst`, and the themes are located at https://highlightjs.org/static/demo/.


