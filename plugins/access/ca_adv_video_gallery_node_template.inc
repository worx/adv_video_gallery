<?php

/**
 * @file
 * Plugin to provide access control based upon ca_adv_video_gallery admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Video Gallery: node type'),
  'description' => t('Control access by adv video gallery node type.'),
  'callback' => 'ca_adv_video_gallery_node_template_access_check',
  'settings form' => 'ca_adv_video_gallery_node_template_access_settings',
  'settings form submit' => 'ca_adv_video_gallery_node_template_access_settings_submit',
  'summary' => 'ca_adv_video_gallery_node_template_access_summary',
);

/**
 * Settings form for the 'by adv video gallery node type' access plugin.
 */
function ca_adv_video_gallery_node_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_adv_video_gallery_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Video Galleries node template'),
    '#options' => array(
      'ca_adv_video_gallery_node_template_one' => t('Template one'),
      'ca_adv_video_gallery_node_template_two' => t('Template two'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_adv_video_gallery_node_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_adv_video_gallery_node_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_adv_video_gallery_node_template_access_check($conf, $context) {
  return $conf['ca_adv_video_gallery_node_template'] == variable_get('ca_adv_video_gallery_node_template', 'ca_adv_video_gallery_node_template_one');
}

/**
 * Provide a summary description based upon the checked adv video gallery node type.
 */
function ca_adv_video_gallery_node_template_access_summary($conf, $context) {
  if ($conf['ca_adv_video_gallery_node_template'] == 'ca_adv_video_gallery_node_template_one') {
    $template = t('Template one');
  }
  else {
    $template = t('Template two');
  }

  return t('Display template is set to: ' . $template);
}
