<?php
/**
 * @file
 * ca_adv_video_gallery.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ca_adv_video_gallery_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ca_adv_video_gallery';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ca_adv_video_gallery_video';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ca_adv_video_gallery';
  $strongarm->value = 0;
  $export['comment_anonymous_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ca_adv_video_gallery_video';
  $strongarm->value = 0;
  $export['comment_anonymous_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ca_adv_video_gallery';
  $strongarm->value = '1';
  $export['comment_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ca_adv_video_gallery_video';
  $strongarm->value = '1';
  $export['comment_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ca_adv_video_gallery';
  $strongarm->value = 1;
  $export['comment_default_mode_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ca_adv_video_gallery_video';
  $strongarm->value = 1;
  $export['comment_default_mode_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ca_adv_video_gallery';
  $strongarm->value = '50';
  $export['comment_default_per_page_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ca_adv_video_gallery_video';
  $strongarm->value = '50';
  $export['comment_default_per_page_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ca_adv_video_gallery';
  $strongarm->value = 1;
  $export['comment_form_location_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ca_adv_video_gallery_video';
  $strongarm->value = 1;
  $export['comment_form_location_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ca_adv_video_gallery';
  $strongarm->value = '1';
  $export['comment_preview_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ca_adv_video_gallery_video';
  $strongarm->value = '1';
  $export['comment_preview_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ca_adv_video_gallery';
  $strongarm->value = 1;
  $export['comment_subject_field_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ca_adv_video_gallery_video';
  $strongarm->value = 1;
  $export['comment_subject_field_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ca_adv_video_gallery_video';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ca_adv_video_gallery';
  $strongarm->value = array();
  $export['menu_options_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ca_adv_video_gallery_video';
  $strongarm->value = array();
  $export['menu_options_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ca_adv_video_gallery';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ca_adv_video_gallery_video';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_adv_video_gallery';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_adv_video_gallery_video';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ca_adv_video_gallery';
  $strongarm->value = '1';
  $export['node_preview_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ca_adv_video_gallery_video';
  $strongarm->value = '1';
  $export['node_preview_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ca_adv_video_gallery';
  $strongarm->value = 0;
  $export['node_submitted_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ca_adv_video_gallery_video';
  $strongarm->value = 0;
  $export['node_submitted_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_adv_video_gallery_pattern';
  $strongarm->value = 'video-gallery/[node:field_ca_adv_videog_p_gallery]/[node:title]';
  $export['pathauto_node_ca_adv_video_gallery_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_adv_video_gallery_video_pattern';
  $strongarm->value = 'video-gallery/[node:field_ca_video_gallery_parent]/[node:title]';
  $export['pathauto_node_ca_adv_video_gallery_video_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ca_adv_video_gallery';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ca_adv_video_gallery_video';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_ca_adv_video_gallery';
  $strongarm->value = '0';
  $export['weight_default_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_ca_adv_video_gallery_video';
  $strongarm->value = '0';
  $export['weight_default_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_ca_adv_video_gallery';
  $strongarm->value = '0';
  $export['weight_enabled_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_ca_adv_video_gallery_video';
  $strongarm->value = '0';
  $export['weight_enabled_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_ca_adv_video_gallery';
  $strongarm->value = '0';
  $export['weight_menu_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_ca_adv_video_gallery_video';
  $strongarm->value = '0';
  $export['weight_menu_ca_adv_video_gallery_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_ca_adv_video_gallery';
  $strongarm->value = '20';
  $export['weight_range_ca_adv_video_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_ca_adv_video_gallery_video';
  $strongarm->value = '20';
  $export['weight_range_ca_adv_video_gallery_video'] = $strongarm;

  return $export;
}