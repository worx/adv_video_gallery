<?php
/**
 * @file
 * ca_adv_video_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_adv_video_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_adv_video_gallery_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ca_adv_video_gallery_node_info() {
  $items = array(
    'ca_adv_video_gallery' => array(
      'name' => t('Video Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ca_adv_video_gallery_video' => array(
      'name' => t('Video Gallery Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}