<?php

/**
 * @file
 * Admin forms for the highlightjs_wysiwyg module.
 */

function highlightjs_wysiwyg_admin_settings_form($form, &$form_state) {
  $config = config('highlightjs_wysiwyg.settings');

  $form['#config'] = 'highlightjs_wysiwyg.settings';

  $form['languages'] = array(
    '#title' => t('Languages'),
    '#type' => 'textarea',
    '#default_value' => $config->get('languages'),
    '#required' => TRUE,
    '#description' => t('Add the languages that you want to select from in the WYSIWYG modal.
      Use the format of "display_name|css_class" one per line'),
  );

  return system_settings_form($form);
}
