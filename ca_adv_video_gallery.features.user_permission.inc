<?php
/**
 * @file
 * ca_adv_video_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_adv_video_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_adv_video_gallery content.
  $permissions['create ca_adv_video_gallery content'] = array(
    'name' => 'create ca_adv_video_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: create ca_adv_video_gallery_video content.
  $permissions['create ca_adv_video_gallery_video content'] = array(
    'name' => 'create ca_adv_video_gallery_video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_adv_video_gallery content.
  $permissions['delete any ca_adv_video_gallery content'] = array(
    'name' => 'delete any ca_adv_video_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_adv_video_gallery_video content.
  $permissions['delete any ca_adv_video_gallery_video content'] = array(
    'name' => 'delete any ca_adv_video_gallery_video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_adv_video_gallery content.
  $permissions['delete own ca_adv_video_gallery content'] = array(
    'name' => 'delete own ca_adv_video_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_adv_video_gallery_video content.
  $permissions['delete own ca_adv_video_gallery_video content'] = array(
    'name' => 'delete own ca_adv_video_gallery_video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_adv_video_gallery content.
  $permissions['edit any ca_adv_video_gallery content'] = array(
    'name' => 'edit any ca_adv_video_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_adv_video_gallery_video content.
  $permissions['edit any ca_adv_video_gallery_video content'] = array(
    'name' => 'edit any ca_adv_video_gallery_video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_adv_video_gallery content.
  $permissions['edit own ca_adv_video_gallery content'] = array(
    'name' => 'edit own ca_adv_video_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_adv_video_gallery_video content.
  $permissions['edit own ca_adv_video_gallery_video content'] = array(
    'name' => 'edit own ca_adv_video_gallery_video content',
    'roles' => array(
      0 => 'administrator',
      1 => 'adv video gallery admin',
      2 => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
