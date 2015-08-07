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
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Video Grid View Template 1',
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
    $pane->pid = 'new-d60a9102-f1f0-4ff3-a306-be8eff572def';
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
    $pane->uuid = 'd60a9102-f1f0-4ff3-a306-be8eff572def';
    $display->content['new-d60a9102-f1f0-4ff3-a306-be8eff572def'] = $pane;
    $display->panels['middle'][0] = 'new-d60a9102-f1f0-4ff3-a306-be8eff572def';
    $pane = new stdClass();
    $pane->pid = 'new-0e130cf7-6508-4fd4-ad4e-12f7af936c69';
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
    $pane->uuid = '0e130cf7-6508-4fd4-ad4e-12f7af936c69';
    $display->content['new-0e130cf7-6508-4fd4-ad4e-12f7af936c69'] = $pane;
    $display->panels['middle'][1] = 'new-0e130cf7-6508-4fd4-ad4e-12f7af936c69';
    $pane = new stdClass();
    $pane->pid = 'new-df4f927c-bdce-4032-b378-a744b7008e57';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df4f927c-bdce-4032-b378-a744b7008e57';
    $display->content['new-df4f927c-bdce-4032-b378-a744b7008e57'] = $pane;
    $display->panels['middle'][2] = 'new-df4f927c-bdce-4032-b378-a744b7008e57';
    $pane = new stdClass();
    $pane->pid = 'new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
    $display->content['new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b'] = $pane;
    $display->panels['middle'][3] = 'new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
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
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Video Grid View Template 2',
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
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Video Grid View Template 3',
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
  $handler->weight = -16;
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
  $handler->weight = -15;
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

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_video_gallery_video_node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Video Flex View Template 1',
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
    'body_classes_to_add' => 'ca-video-galllery-category-flex ca-video-gallery-category-flex-template-1',
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
    $pane->pid = 'new-df4f927c-bdce-4032-b378-a744b7008e57';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_flex_1';
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
    $pane->uuid = 'df4f927c-bdce-4032-b378-a744b7008e57';
    $display->content['new-df4f927c-bdce-4032-b378-a744b7008e57'] = $pane;
    $display->panels['middle'][0] = 'new-df4f927c-bdce-4032-b378-a744b7008e57';
    $pane = new stdClass();
    $pane->pid = 'new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_flex_1';
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
    $pane->uuid = '0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
    $display->content['new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b'] = $pane;
    $display->panels['middle'][1] = 'new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_video_gallery_video_node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_video_gallery_video_node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Video Flex View Template 2',
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
    'body_classes_to_add' => 'ca-video-galllery-category-flex ca-video-gallery-category-flex-template-2',
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
    $pane->pid = 'new-42465636-8200-4285-85ee-8c94bf4581d2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_flex_1';
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
    $pane->uuid = '42465636-8200-4285-85ee-8c94bf4581d2';
    $display->content['new-42465636-8200-4285-85ee-8c94bf4581d2'] = $pane;
    $display->panels['middle'][0] = 'new-42465636-8200-4285-85ee-8c94bf4581d2';
    $pane = new stdClass();
    $pane->pid = 'new-92be93da-25c8-4391-8168-a3a8dec71d74';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_flex_2';
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
    $pane->uuid = '92be93da-25c8-4391-8168-a3a8dec71d74';
    $display->content['new-92be93da-25c8-4391-8168-a3a8dec71d74'] = $pane;
    $display->panels['middle'][1] = 'new-92be93da-25c8-4391-8168-a3a8dec71d74';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_video_gallery_video_node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_video_gallery_video_node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Gallery Video Flex View Template 3',
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
    'body_classes_to_add' => 'ca-video-galllery-category-flex ca-video-gallery-category-flex-template-3',
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
    $pane->pid = 'new-14a53122-1245-4b44-9ee1-7da86c86f90b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_flex_1';
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
    $pane->uuid = '14a53122-1245-4b44-9ee1-7da86c86f90b';
    $display->content['new-14a53122-1245-4b44-9ee1-7da86c86f90b'] = $pane;
    $display->panels['middle'][0] = 'new-14a53122-1245-4b44-9ee1-7da86c86f90b';
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
  $export['ca_adv_video_gallery_video_node_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_17defde7-2f79-49f3-a0e3-1ee6d6294520';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Gallery Video Flex View Template 3',
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
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-category-flex ca-video-gallery-category-flex-template-3',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->pid = 'new-14a53122-1245-4b44-9ee1-7da86c86f90b';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_flex_1';
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
    $pane->uuid = '14a53122-1245-4b44-9ee1-7da86c86f90b';
    $display->content['new-14a53122-1245-4b44-9ee1-7da86c86f90b'] = $pane;
    $display->panels['first-first'][0] = 'new-14a53122-1245-4b44-9ee1-7da86c86f90b';
    $pane = new stdClass();
    $pane->pid = 'new-6d1b10e3-182c-4ed6-bb16-0feb3df27970';
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][1] = 'new-6d1b10e3-182c-4ed6-bb16-0feb3df27970';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_17defde7-2f79-49f3-a0e3-1ee6d6294520'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_3dc886e1-f45d-4e24-a350-d3a5809f47ab';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Gallery Video Grid View Template 2',
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
  $export['node_view__panel_context_3dc886e1-f45d-4e24-a350-d3a5809f47ab'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_4e310c50-52b0-4010-b105-4baf3d94f466';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Gallery Video Grid View Template 3',
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
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
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
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-bd8080d7-4840-4c84-9c6f-ef09d19456f7';
    $pane = new stdClass();
    $pane->pid = 'new-6d1b10e3-182c-4ed6-bb16-0feb3df27970';
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][1] = 'new-6d1b10e3-182c-4ed6-bb16-0feb3df27970';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_4e310c50-52b0-4010-b105-4baf3d94f466'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_4e567dd5-0e06-4123-9797-19dab91325ed';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Video Node View Template 2',
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
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
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
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-3a62190d-77c0-46f1-9747-00689022a04b';
    $pane = new stdClass();
    $pane->pid = 'new-0aa49df5-3e1d-46e9-be48-29779b63c03e';
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][1] = 'new-0aa49df5-3e1d-46e9-be48-29779b63c03e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_4e567dd5-0e06-4123-9797-19dab91325ed'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_6a140618-5a87-46a6-bd89-b41cedc295c8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Video Node View Template 1',
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
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
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
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-919c684d-eb36-4baa-928b-5f241d8da512';
    $pane = new stdClass();
    $pane->pid = 'new-bd2acf18-3e87-48a5-99f8-3054596a13f6';
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][1] = 'new-bd2acf18-3e87-48a5-99f8-3054596a13f6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_6a140618-5a87-46a6-bd89-b41cedc295c8'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_d6eb7605-d7e0-47f1-8b16-90727d2a8382';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Gallery Video Grid View Template 1',
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
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
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
    $pane->pid = 'new-d60a9102-f1f0-4ff3-a306-be8eff572def';
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
    $pane->uuid = 'd60a9102-f1f0-4ff3-a306-be8eff572def';
    $display->content['new-d60a9102-f1f0-4ff3-a306-be8eff572def'] = $pane;
    $display->panels['middle'][0] = 'new-d60a9102-f1f0-4ff3-a306-be8eff572def';
    $pane = new stdClass();
    $pane->pid = 'new-0e130cf7-6508-4fd4-ad4e-12f7af936c69';
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
    $pane->uuid = '0e130cf7-6508-4fd4-ad4e-12f7af936c69';
    $display->content['new-0e130cf7-6508-4fd4-ad4e-12f7af936c69'] = $pane;
    $display->panels['middle'][1] = 'new-0e130cf7-6508-4fd4-ad4e-12f7af936c69';
    $pane = new stdClass();
    $pane->pid = 'new-df4f927c-bdce-4032-b378-a744b7008e57';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df4f927c-bdce-4032-b378-a744b7008e57';
    $display->content['new-df4f927c-bdce-4032-b378-a744b7008e57'] = $pane;
    $display->panels['middle'][2] = 'new-df4f927c-bdce-4032-b378-a744b7008e57';
    $pane = new stdClass();
    $pane->pid = 'new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
    $display->content['new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b'] = $pane;
    $display->panels['middle'][3] = 'new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_d6eb7605-d7e0-47f1-8b16-90727d2a8382'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_eeea4638-11fd-493d-afc2-64fabd466fb4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Gallery Video Flex View Template 1',
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
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-category-flex ca-video-gallery-category-flex-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->pid = 'new-df4f927c-bdce-4032-b378-a744b7008e57';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_flex_1';
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
    $pane->uuid = 'df4f927c-bdce-4032-b378-a744b7008e57';
    $display->content['new-df4f927c-bdce-4032-b378-a744b7008e57'] = $pane;
    $display->panels['first-first'][0] = 'new-df4f927c-bdce-4032-b378-a744b7008e57';
    $pane = new stdClass();
    $pane->pid = 'new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_flex_1';
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
    $pane->uuid = '0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
    $display->content['new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b'] = $pane;
    $display->panels['first-first'][1] = 'new-0b86c85d-ccc2-4c7f-b85b-b20c0b16010b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_eeea4638-11fd-493d-afc2-64fabd466fb4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_fc51aed3-f20f-4a99-bb7b-75b5e722127c';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Gallery Video Flex View Template 2',
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
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-category-flex ca-video-gallery-category-flex-template-2',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->pid = 'new-42465636-8200-4285-85ee-8c94bf4581d2';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_list-ca_adv_video_gallery_sub_flex_1';
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
    $pane->uuid = '42465636-8200-4285-85ee-8c94bf4581d2';
    $display->content['new-42465636-8200-4285-85ee-8c94bf4581d2'] = $pane;
    $display->panels['first-first'][0] = 'new-42465636-8200-4285-85ee-8c94bf4581d2';
    $pane = new stdClass();
    $pane->pid = 'new-92be93da-25c8-4391-8168-a3a8dec71d74';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_flex_2';
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
    $pane->uuid = '92be93da-25c8-4391-8168-a3a8dec71d74';
    $display->content['new-92be93da-25c8-4391-8168-a3a8dec71d74'] = $pane;
    $display->panels['first-first'][1] = 'new-92be93da-25c8-4391-8168-a3a8dec71d74';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_fc51aed3-f20f-4a99-bb7b-75b5e722127c'] = $handler;

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
  $page->admin_title = 'CA Adv Video Gallery: Add Gallery';
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
  $handler->name = 'page_ca_adv_video_gallery_add_gallery__aurora';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_add_gallery';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Add Gallery',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '358a453e-8ab5-4e3d-b7ae-60c7d6ec810c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-85781080-bafa-41d6-a49b-9895f648de76';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'ca_adv_video_gallery',
      'context_admin_use_node_edit' => 0,
      'context' => 'empty',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85781080-bafa-41d6-a49b-9895f648de76';
    $display->content['new-85781080-bafa-41d6-a49b-9895f648de76'] = $pane;
    $display->panels['first-first'][0] = 'new-85781080-bafa-41d6-a49b-9895f648de76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-85781080-bafa-41d6-a49b-9895f648de76';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_add_gallery_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_add_gallery';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
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
  $page->admin_title = 'CA Adv Video Gallery: Add Video';
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
  $handler->weight = -29;
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_add_image__aurora_adv_video_gallery_add_vid';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_add_image';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Add Video',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_adv_video_gallery_add_vid',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1c330cbe-d2a4-4ff3-93f5-71273d724492';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc18efb5-5b5d-47c3-b351-1f8f272a1a01';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'ca_adv_video_gallery_video',
      'context_admin_use_node_edit' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc18efb5-5b5d-47c3-b351-1f8f272a1a01';
    $display->content['new-dc18efb5-5b5d-47c3-b351-1f8f272a1a01'] = $pane;
    $display->panels['first-first'][0] = 'new-dc18efb5-5b5d-47c3-b351-1f8f272a1a01';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dc18efb5-5b5d-47c3-b351-1f8f272a1a01';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_add_image'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_add_sub_gallery';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery: Add Sub Gallery';
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
  $handler->weight = -29;
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_add_sub_gallery__aurora_adv_video_gallery_add_sub';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_add_sub_gallery';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Add Sub Gallery',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_adv_video_gallery_add_sub',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dceb52d3-0055-4950-b767-cdd27d3b290d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b981b9ff-c92e-4712-a170-eb056bd06542';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'ca_adv_video_gallery',
      'context_admin_use_node_edit' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b981b9ff-c92e-4712-a170-eb056bd06542';
    $display->content['new-b981b9ff-c92e-4712-a170-eb056bd06542'] = $pane;
    $display->panels['first-first'][0] = 'new-b981b9ff-c92e-4712-a170-eb056bd06542';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b981b9ff-c92e-4712-a170-eb056bd06542';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_add_sub_gallery'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_video_gallery_admin_gallery_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Adv Video Gallery: Sub Gallery Sort';
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
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Sub Gallery Sort',
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
    $pane->panel = 'middle';
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
    $display->panels['middle'][0] = 'new-f6630aae-29fa-4722-ad42-0d84695c175b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_admin_gallery_sort__panel_context_f21dd74a-ccdc-4a7b-a33c-4e85a893b18a';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_admin_gallery_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Sub Gallery Sort',
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
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-f6630aae-29fa-4722-ad42-0d84695c175b';
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
  $page->admin_title = 'CA Adv Video Gallery: Video Gallery Admin';
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
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Video Gallery Admin',
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_gallery_administration__panel_context_adf5c71c-a2fa-46cf-8499-4abaf585af7f';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_gallery_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Video Gallery Admin',
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
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-7e6171fd-350a-43c2-b7b1-f9bcfac0dafc';
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
  $handler->weight = -29;
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_gallery_sort__panel_context_23435b19-9e78-4d31-b6a5-3b0813fb4628';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_gallery_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Gallery Sort',
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
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-e818bd91-aa5e-40c9-88de-639df2ee9abc';
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
  $page->admin_title = 'CA Adv Video Gallery: List View';
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
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: List Grid View Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-list ca-video-gallery-list-template-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_list_view_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: List Grid View Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-list ca-video-gallery-list-template-2',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_list_view_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: List Flex View Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-flex ca-video-gallery-flex-template-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
    $pane = new stdClass();
    $pane->pid = 'new-894823cc-5ed5-4cad-a787-9e44f0a232ab';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '894823cc-5ed5-4cad-a787-9e44f0a232ab';
    $display->content['new-894823cc-5ed5-4cad-a787-9e44f0a232ab'] = $pane;
    $display->panels['middle'][1] = 'new-894823cc-5ed5-4cad-a787-9e44f0a232ab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_list_view_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: List Flex View Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-flex ca-video-gallery-flex-template-2',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_list_view__panel_context_5c844f3c-3955-4012-9d3e-362ef552a58b';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: List Grid View Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-list ca-video-gallery-list-template-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-a9b88f44-b8d1-45bd-b3fe-17a080d2ff1d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_list_view__panel_context_c325a48a-4a89-4fa1-84a9-018a83559d51';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: List Grid View Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-list ca-video-gallery-list-template-2',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_two',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-a9b88f44-b8d1-45bd-b3fe-17a080d2ff1d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_list_view__panel_context_3c32f54b-f99a-4fb6-bf28-22fba2196ab6';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: List Flex View Template 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-flex ca-video-gallery-flex-template-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_one',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-a9b88f44-b8d1-45bd-b3fe-17a080d2ff1d';
    $pane = new stdClass();
    $pane->pid = 'new-894823cc-5ed5-4cad-a787-9e44f0a232ab';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_video_gallery_video_list-adv_video_flex_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '894823cc-5ed5-4cad-a787-9e44f0a232ab';
    $display->content['new-894823cc-5ed5-4cad-a787-9e44f0a232ab'] = $pane;
    $display->panels['first-first'][1] = 'new-894823cc-5ed5-4cad-a787-9e44f0a232ab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_list_view__panel_context_25788c76-317f-47a6-940f-2f34aa3d453d';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: List Flex View Template 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-video-galllery-flex ca-video-gallery-flex-template-2',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_adv_video_gallery_list_template',
          'settings' => array(
            'ca_adv_video_gallery_list_template' => 'ca_adv_video_gallery_list_template_two',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-a9b88f44-b8d1-45bd-b3fe-17a080d2ff1d';
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
  $page->admin_title = 'CA Adv Video Gallery: Video Admin';
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
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Video Admin',
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
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Video Creator Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-galllery-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
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
    $pane->panel = 'middle';
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
    $display->panels['middle'][0] = 'new-6bf1ddec-fde8-4df7-bf8d-7a7ac0f4115b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_video_admin__panel_context_6484cd63-dd22-4668-ba75-60ec11e9e630';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_video_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Video Admin',
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
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-video-galllery-admin',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-5ef92814-17ad-4462-bc0d-c32f961e978a';
    $pane = new stdClass();
    $pane->pid = 'new-d873c56b-311e-451e-9629-e7f76565fffc';
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][1] = 'new-d873c56b-311e-451e-9629-e7f76565fffc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_video_admin__panel_context_e1327d4e-c907-4b4a-84e7-59617a233799';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_video_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Video Creator Admin',
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
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-6bf1ddec-fde8-4df7-bf8d-7a7ac0f4115b';
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
  $page->admin_title = 'CA Adv Video Gallery: Video Sort';
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
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Adv Video Gallery: Video Sort',
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
    $pane->panel = 'middle';
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
    $display->panels['middle'][0] = 'new-688d7222-fd6f-4f0f-94c2-d30b10b2e33f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_video_gallery_video_sort__panel_context_91f7ac6d-43dd-435b-94b3-3cbc174031e7';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_video_gallery_video_sort';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Adv Video Gallery: Video Sort',
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
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
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
    $pane->panel = 'first-first';
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
    $display->panels['first-first'][0] = 'new-688d7222-fd6f-4f0f-94c2-d30b10b2e33f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_video_gallery_video_sort'] = $page;

  return $pages;

}
