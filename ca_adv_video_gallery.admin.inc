<?php

/** 
 * @file
 * CA_Adv_Video_Gallery admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the
 * actual feature.
 */

/**
 * Defines the menu for overriding news feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_adv_video_gallery_settings_form() {
  $form = array();
  
  $form['ca_adv_video_gallery_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_adv_video_gallery_menu_title', 'Video Gallery'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_adv_video_gallery_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Panel Title'),
    '#default_value' => variable_get('ca_adv_video_gallery_panel_title', 'Video Gallery'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
    $form['ca_adv_video_gallery_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of galleries to display'),
    '#default_value' => variable_get('ca_adv_video_gallery_list_count', 12),
    '#required' => TRUE,
    '#description' => t('How many galleries would you like displayed per page? Suggested in groups for 3.'),
  );
    $form['ca_adv_video_gallery_sub_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of sub galleries to display'),
    '#default_value' => variable_get('ca_adv_video_gallery_sub_list_count', 3),
    '#required' => TRUE,
    '#description' => t('How many sub galleries would you like displayed per page? Suggested in groups for 3.'),
  );
  $form['ca_adv_video_gallery_video_grid_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of videos to display in the grid'),
    '#default_value' => variable_get('ca_adv_video_gallery_video_grid_count', 12),
    '#required' => TRUE,
    '#description' => t('How many videos would you like displayed per page? Template 1 suggested in groups for 3. Template 2 suggested in groups for 2.'),
  );
  $form['ca_adv_video_gallery_video_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of videos to display in the list'),
    '#default_value' => variable_get('ca_adv_video_gallery_video_list_count', 4),
    '#required' => TRUE,
    '#description' => t('How many videos would you like displayed per page? Template 3.'),
  );
  $form['ca_adv_video_gallery_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Video Galleries Video list template'),
    '#options' => array(
      'ca_adv_video_gallery_list_template_one' => t('Template one'),
      'ca_adv_video_gallery_list_template_two' => t('Template two'),
      'ca_adv_video_gallery_list_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_adv_video_gallery_list_template', 'ca_adv_video_gallery_list_template_one'),
  );
  $form['ca_adv_video_gallery_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Video Galleries Video Node template'),
    '#options' => array(
      'ca_adv_video_gallery_node_template_one' => t('Template one'),
      'ca_adv_video_gallery_node_template_two' => t('Template two'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_adv_video_gallery_node_template', 'ca_adv_video_gallery_node_template_one'),
  );
  
  return system_settings_form($form);
}
