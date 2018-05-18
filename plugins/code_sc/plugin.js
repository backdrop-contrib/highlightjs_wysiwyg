(function ($) {
  CKEDITOR.plugins.add('code_sc', {
    init: function (editor) {
      editor.addCommand('code_sc_command', new CKEDITOR.dialogCommand('code_sc_generatorDialog'));

      editor.ui.addButton('code_sc_button', {
        label: 'Code Syntax Highlighting',
        command: 'code_sc_command',
        icon: this.path + 'images/code_sc_button.png'
      });
      CKEDITOR.dialog.add('code_sc_generatorDialog', this.path + 'dialogs/code_sc_generator.js');
    }
  });
})(jQuery);
