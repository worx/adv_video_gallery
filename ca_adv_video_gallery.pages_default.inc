<?php
/**
 * @file
 * ca_adv_video_gallery.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_adv_video_gallery_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_video_gallery_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Video View Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_adv_video_gallery' => 'ca_adv_video_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-category-list ca-video-gallery-category-list-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f2fd7da2-f9e2-4145-85dd-e1ac21f8d416';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e6ecefc5-986d-4ece-862a-05598adc313f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e6ecefc5-986d-4ece-862a-05598adc313f';
    $display->content['new-e6ecefc5-986d-4ece-862a-05598adc313f'] = $pane;
    $display->panels['middle'][0] = 'new-e6ecefc5-986d-4ece-862a-05598adc313f';
    $pane = new stdClass();
    $pane->pid = 'new-066d6601-7b36-4b5b-95a5-d9ce4867bfce';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '066d6601-7b36-4b5b-95a5-d9ce4867bfce';
    $display->content['new-066d6601-7b36-4b5b-95a5-d9ce4867bfce'] = $pane;
    $display->panels['middle'][1] = 'new-066d6601-7b36-4b5b-95a5-d9ce4867bfce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_video_gallery_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_video_gallery_node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Video View Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_adv_video_gallery' => 'ca_adv_video_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-category-list ca-video-gallery-category-list-template-2',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f0991430-31c9-4d4a-be07-b3920ea0db3c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6ea01a17-28f5-4085-bb5b-4ef03fc97b32';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6ea01a17-28f5-4085-bb5b-4ef03fc97b32';
    $display->content['new-6ea01a17-28f5-4085-bb5b-4ef03fc97b32'] = $pane;
    $display->panels['middle'][0] = 'new-6ea01a17-28f5-4085-bb5b-4ef03fc97b32';
    $pane = new stdClass();
    $pane->pid = 'new-7f52f5be-d321-475e-b8f0-7acf2cc7f3aa';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_list_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7f52f5be-d321-475e-b8f0-7acf2cc7f3aa';
    $display->content['new-7f52f5be-d321-475e-b8f0-7acf2cc7f3aa'] = $pane;
    $display->panels['middle'][1] = 'new-7f52f5be-d321-475e-b8f0-7acf2cc7f3aa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_video_gallery_node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_video_gallery_node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Video View Template 3',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_adv_video_gallery' => 'ca_adv_video_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_three',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-category-list ca-video-gallery-category-list-template-3',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '68d61128-6cf6-45fa-bc9f-5ebc97109b9d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd8080d7-4840-4c84-9c6f-ef09d19456f7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd8080d7-4840-4c84-9c6f-ef09d19456f7';
    $display->content['new-bd8080d7-4840-4c84-9c6f-ef09d19456f7'] = $pane;
    $display->panels['middle'][0] = 'new-bd8080d7-4840-4c84-9c6f-ef09d19456f7';
    $pane = new stdClass();
    $pane->pid = 'new-6d1b10e3-182c-4ed6-bb16-0feb3df27970';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_list_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6d1b10e3-182c-4ed6-bb16-0feb3df27970';
    $display->content['new-6d1b10e3-182c-4ed6-bb16-0feb3df27970'] = $pane;
    $display->panels['middle'][1] = 'new-6d1b10e3-182c-4ed6-bb16-0feb3df27970';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_video_gallery_node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_video_gallery_video_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Video Node View Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_adv_video_gallery_video' => 'ca_adv_video_gallery_video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_video_gallery_node_template',
          'settings' => array(
            'ca_adv_video_gallery_node_template' => 'ca_adv_video_gallery_node_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-video-node ca-video-gallery-video-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '108f9d3d-b656-4a11-8f94-8da86567bc70';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-919c684d-eb36-4baa-928b-5f241d8da512';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_node-ca_adv_video_gallery_node_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '919c684d-eb36-4baa-928b-5f241d8da512';
    $display->content['new-919c684d-eb36-4baa-928b-5f241d8da512'] = $pane;
    $display->panels['middle'][0] = 'new-919c684d-eb36-4baa-928b-5f241d8da512';
    $pane = new stdClass();
    $pane->pid = 'new-bd2acf18-3e87-48a5-99f8-3054596a13f6';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bd2acf18-3e87-48a5-99f8-3054596a13f6';
    $display->content['new-bd2acf18-3e87-48a5-99f8-3054596a13f6'] = $pane;
    $display->panels['middle'][1] = 'new-bd2acf18-3e87-48a5-99f8-3054596a13f6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_video_gallery_video_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_video_gallery_video_node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Video Node View Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_adv_video_gallery_video' => 'ca_adv_video_gallery_video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_adv_video_gallery_node_template',
          'settings' => array(
            'ca_adv_video_gallery_node_template' => 'ca_adv_video_gallery_node_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-video-node ca-video-gallery-video-node-template-2',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '49c2e8c7-c94c-47f4-b4b1-8178a9dd9d42';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a62190d-77c0-46f1-9747-00689022a04b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_node-ca_adv_video_gallery_node_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a62190d-77c0-46f1-9747-00689022a04b';
    $display->content['new-3a62190d-77c0-46f1-9747-00689022a04b'] = $pane;
    $display->panels['middle'][0] = 'new-3a62190d-77c0-46f1-9747-00689022a04b';
    $pane = new stdClass();
    $pane->pid = 'new-0aa49df5-3e1d-46e9-be48-29779b63c03e';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0aa49df5-3e1d-46e9-be48-29779b63c03e';
    $display->content['new-0aa49df5-3e1d-46e9-be48-29779b63c03e'] = $pane;
    $display->panels['middle'][1] = 'new-0aa49df5-3e1d-46e9-be48-29779b63c03e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_video_gallery_video_node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_adv_video_gallery_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_add_gallery';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery Admin: Add Gallery';
  $page->admin_description = '';
  $page->path = 'video-gallery/add_gallery';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 250184028,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Gallery',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_add_gallery_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_add_gallery';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_adv_video_gallery',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_add_gallery'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_add_image';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery Admin: Add Video';
  $page->admin_description = '';
  $page->path = 'node/%node/add_video';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_video_gallery' => 'ca_adv_video_gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 250184028,
            2 => 4,
            3 => 135507392,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Video',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_add_image_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_add_image';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'entityref_create_node:ca_adv_video_gallery_video:field_ca_video_gallery_parent',
    'context_admin_options_items' => 'ca_adv_video_gallery_video',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_video_gallery_parent',
    'context_admin_custom_redirect' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_add_image'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_add_sub_gallery';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery Admin: Add Sub Gallery';
  $page->admin_description = '';
  $page->path = 'node/%node/add_sub_video_gallery';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_video_gallery' => 'ca_adv_video_gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 250184028,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Sub Gallery',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_add_sub_gallery_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_add_sub_gallery';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'entityref_create_node:ca_adv_video_gallery:field_ca_adv_videog_p_gallery',
    'context_admin_options_items' => 'ca_adv_video_gallery',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_adv_videog_p_gallery',
    'context_admin_custom_redirect' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_add_sub_gallery'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_admin_gallery_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery Admin: Gallery Sort';
  $page->admin_description = '';
  $page->path = 'node/%node/video-admin/gallery_sort_order';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_video_gallery' => 'ca_adv_video_gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 250184028,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort Gallery',
    'name' => 'navigation',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_admin_gallery_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_admin_gallery_sort';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery Admin: Gallery Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-galllery-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3f380bf2-62cc-4f94-82f1-c88a14fe2534';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f6630aae-29fa-4722-ad42-0d84695c175b';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_sort-ca_adv_video_gallery_sub_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6630aae-29fa-4722-ad42-0d84695c175b';
    $display->content['new-f6630aae-29fa-4722-ad42-0d84695c175b'] = $pane;
    $display->panels['center'][0] = 'new-f6630aae-29fa-4722-ad42-0d84695c175b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_admin_gallery_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_gallery_administration';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery Admin: Video Gallery Administration';
  $page->admin_description = '';
  $page->path = 'video-gallery/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 250184028,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_gallery_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_gallery_administration';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery Admin: Video Gallery Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-galllery-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administer';
  $display->uuid = '500bac6d-f91a-4e08-aea1-38d8983a760b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7e6171fd-350a-43c2-b7b1-f9bcfac0dafc';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_admin-ca_adv_video_gallery_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e6171fd-350a-43c2-b7b1-f9bcfac0dafc';
    $display->content['new-7e6171fd-350a-43c2-b7b1-f9bcfac0dafc'] = $pane;
    $display->panels['middle'][0] = 'new-7e6171fd-350a-43c2-b7b1-f9bcfac0dafc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_gallery_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_gallery_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery: Gallery Sort';
  $page->admin_description = '';
  $page->path = 'video-gallery/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 250184028,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_gallery_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_gallery_sort';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-galllery-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c482c627-0684-4c3d-a350-15da7314706b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e818bd91-aa5e-40c9-88de-639df2ee9abc';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_sort-ca_adv_video_gallery_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e818bd91-aa5e-40c9-88de-639df2ee9abc';
    $display->content['new-e818bd91-aa5e-40c9-88de-639df2ee9abc'] = $pane;
    $display->panels['middle'][0] = 'new-e818bd91-aa5e-40c9-88de-639df2ee9abc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_gallery_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_list_view';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery Admin: List View';
  $page->admin_description = '';
  $page->path = 'video-gallery/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Video Gallery',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_list_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery Admin: List View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-list ca-video-gallery-list-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Video Gallery';
  $display->uuid = 'a602495b-7847-4a00-b42f-7f5d44ed6a9c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a9b88f44-b8d1-45bd-b3fe-17a080d2ff1d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9b88f44-b8d1-45bd-b3fe-17a080d2ff1d';
    $display->content['new-a9b88f44-b8d1-45bd-b3fe-17a080d2ff1d'] = $pane;
    $display->panels['middle'][0] = 'new-a9b88f44-b8d1-45bd-b3fe-17a080d2ff1d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_list_view'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_video_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery Admin: Video Admin';
  $page->admin_description = '';
  $page->path = 'node/%node/video-admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_video_gallery' => 'ca_adv_video_gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 250184028,
            2 => 4,
            3 => 135507392,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '3',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_video_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_video_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery Admin: Video Creator Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 250184028,
              2 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-galllery-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Administer';
  $display->uuid = '5df879be-8b02-48aa-a56f-064ba05f2951';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5ef92814-17ad-4462-bc0d-c32f961e978a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_admin-ca_adv_video_gallery_sub_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ef92814-17ad-4462-bc0d-c32f961e978a';
    $display->content['new-5ef92814-17ad-4462-bc0d-c32f961e978a'] = $pane;
    $display->panels['middle'][0] = 'new-5ef92814-17ad-4462-bc0d-c32f961e978a';
    $pane = new stdClass();
    $pane->pid = 'new-d873c56b-311e-451e-9629-e7f76565fffc';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_admin-ca_adv_video_gallery_video_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd873c56b-311e-451e-9629-e7f76565fffc';
    $display->content['new-d873c56b-311e-451e-9629-e7f76565fffc'] = $pane;
    $display->panels['middle'][1] = 'new-d873c56b-311e-451e-9629-e7f76565fffc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_video_admin_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_video_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery Admin: Video Creator Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-galllery-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 135507392,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f342fb6e-6d5b-4416-98f4-513561ed1457';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6bf1ddec-fde8-4df7-bf8d-7a7ac0f4115b';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_admin-ca_adv_vg_video_creator_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6bf1ddec-fde8-4df7-bf8d-7a7ac0f4115b';
    $display->content['new-6bf1ddec-fde8-4df7-bf8d-7a7ac0f4115b'] = $pane;
    $display->panels['center'][0] = 'new-6bf1ddec-fde8-4df7-bf8d-7a7ac0f4115b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_video_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_video_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery Admin: Video Sort';
  $page->admin_description = '';
  $page->path = 'node/%node/video-admin/video_sort_order';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_video_gallery' => 'ca_adv_video_gallery',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 250184028,
            2 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort Video',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_video_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_video_sort';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery Admin: Video Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-galllery-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f91a20e-ac9d-424c-ae65-792b42c8d0e0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-688d7222-fd6f-4f0f-94c2-d30b10b2e33f';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_sort-ca_adv_video_gallery_sort_video_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '688d7222-fd6f-4f0f-94c2-d30b10b2e33f';
    $display->content['new-688d7222-fd6f-4f0f-94c2-d30b10b2e33f'] = $pane;
    $display->panels['center'][0] = 'new-688d7222-fd6f-4f0f-94c2-d30b10b2e33f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_video_sort'] = $page;

  return $pages;

}
