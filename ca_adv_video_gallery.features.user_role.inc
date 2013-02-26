<?php
/**
 * @file
 * ca_adv_video_gallery.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_adv_video_gallery_user_default_roles() {
  $roles = array();

  // Exported role: adv video gallery admin.
  $roles['adv video gallery admin'] = array(
    'name' => 'adv video gallery admin',
    'weight' => '3',
    'machine_name' => 'adv_video_gallery_admin',
  );

  return $roles;
}
