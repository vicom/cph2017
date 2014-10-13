<?php
/**
 * @file
 * cph_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cph_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Firma',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
              'firma' => 'firma',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Firmen Infos',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'row well well-lg',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'aktivit__ten',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'aktivit__ten' => array(
        'type' => 'region',
        'title' => 'Kontaktpersonen',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'row well well-lg',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'aktivit__ten_',
        ),
        'parent' => 'main',
        'class' => 'Kontaktpersonen',
      ),
      'aktivit__ten_' => array(
        'type' => 'region',
        'title' => 'Aktivitäten',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'aktivit__ten' => NULL,
      'aktivit__ten_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9598ee02-1d40-42ae-a6db-8b2c3827821b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc64ddfe-3c4d-412d-ac9d-d62c80519af1';
    $pane->panel = 'aktivit__ten';
    $pane->type = 'views';
    $pane->subtype = 'steckbrief';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'col-md-offset-' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '<h4>Kontakt</h4>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'kontakt',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc64ddfe-3c4d-412d-ac9d-d62c80519af1';
    $display->content['new-bc64ddfe-3c4d-412d-ac9d-d62c80519af1'] = $pane;
    $display->panels['aktivit__ten'][0] = 'new-bc64ddfe-3c4d-412d-ac9d-d62c80519af1';
    $pane = new stdClass();
    $pane->pid = 'new-0fa10cd0-ced6-4acc-b520-53bbc3c14f5e';
    $pane->panel = 'aktivit__ten_';
    $pane->type = 'views';
    $pane->subtype = 'aufgaben';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'col-md-offset-' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '<h3>Aufgaben</h3>',
      'offset' => '0',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'aufgabe',
      'css_class' => 'col-md-12 well well-lg',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0fa10cd0-ced6-4acc-b520-53bbc3c14f5e';
    $display->content['new-0fa10cd0-ced6-4acc-b520-53bbc3c14f5e'] = $pane;
    $display->panels['aktivit__ten_'][0] = 'new-0fa10cd0-ced6-4acc-b520-53bbc3c14f5e';
    $pane = new stdClass();
    $pane->pid = 'new-368ddeb2-68a7-46fb-b01a-106712dae652';
    $pane->panel = 'aktivit__ten_';
    $pane->type = 'views';
    $pane->subtype = 'aufgaben';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'col-md-offset-' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '<h3>Log-Buch</h3>',
      'offset' => '0',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'log',
      'css_class' => 'col-md-12 well well-lg',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '368ddeb2-68a7-46fb-b01a-106712dae652';
    $display->content['new-368ddeb2-68a7-46fb-b01a-106712dae652'] = $pane;
    $display->panels['aktivit__ten_'][1] = 'new-368ddeb2-68a7-46fb-b01a-106712dae652';
    $pane = new stdClass();
    $pane->pid = 'new-d6e1ac20-0541-4e41-b6b9-6f7b87294e00';
    $pane->panel = 'center';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'set1',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6e1ac20-0541-4e41-b6b9-6f7b87294e00';
    $display->content['new-d6e1ac20-0541-4e41-b6b9-6f7b87294e00'] = $pane;
    $display->panels['center'][0] = 'new-d6e1ac20-0541-4e41-b6b9-6f7b87294e00';
    $pane = new stdClass();
    $pane->pid = 'new-7f3584bf-be6c-4c7c-9a9e-bbb119a80db8';
    $pane->panel = 'center';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'set2',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'beschreibung',
      'css_class' => 'col-md-6 ',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7f3584bf-be6c-4c7c-9a9e-bbb119a80db8';
    $display->content['new-7f3584bf-be6c-4c7c-9a9e-bbb119a80db8'] = $pane;
    $display->panels['center'][1] = 'new-7f3584bf-be6c-4c7c-9a9e-bbb119a80db8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
              'steckbrief' => 'steckbrief',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
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
  $display->title = '';
  $display->uuid = 'c5678172-fd2d-4cf1-b751-51c35d85352c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8f41f874-2abd-4338-b290-aa507792d690';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumplist',
      'title' => '',
      'body' => '<ul class="nav nav-pills">
<li class="0 first">
<a title="Der erste Link" href="#beschreibung">Platzhalter</a>
</li>
<li class="0 first">
<a title="Der erste Link" href="#aufgabe">Platzhalter</a>
</li>
<li class="0 first">
<a title="Der erste Link" href="#kontakt">Platzhalter</a>
</li>
<li class="0 first">
<a title="Der erste Link" href="#log">Platzhalter</a>
</li>
</ul>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f41f874-2abd-4338-b290-aa507792d690';
    $display->content['new-8f41f874-2abd-4338-b290-aa507792d690'] = $pane;
    $display->panels['middle'][0] = 'new-8f41f874-2abd-4338-b290-aa507792d690';
    $pane = new stdClass();
    $pane->pid = 'new-a37966c1-769a-49e7-8108-c00142088775';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'box col-md-6 well well-lg',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a37966c1-769a-49e7-8108-c00142088775';
    $display->content['new-a37966c1-769a-49e7-8108-c00142088775'] = $pane;
    $display->panels['middle'][1] = 'new-a37966c1-769a-49e7-8108-c00142088775';
    $pane = new stdClass();
    $pane->pid = 'new-8e2f1fc6-9ffd-408b-94c9-e6a514cd2c45';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'set2',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-6 well well-lg',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8e2f1fc6-9ffd-408b-94c9-e6a514cd2c45';
    $display->content['new-8e2f1fc6-9ffd-408b-94c9-e6a514cd2c45'] = $pane;
    $display->panels['middle'][2] = 'new-8e2f1fc6-9ffd-408b-94c9-e6a514cd2c45';
    $pane = new stdClass();
    $pane->pid = 'new-9e4dd811-1858-4bf2-a303-73cf946c7a53';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'set3',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'info',
      'css_class' => 'col-md-6 well well-lg',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9e4dd811-1858-4bf2-a303-73cf946c7a53';
    $display->content['new-9e4dd811-1858-4bf2-a303-73cf946c7a53'] = $pane;
    $display->panels['middle'][3] = 'new-9e4dd811-1858-4bf2-a303-73cf946c7a53';
    $pane = new stdClass();
    $pane->pid = 'new-a7cb4484-8033-45c2-b256-272d0dc579aa';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'aufgaben';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'col-md-offset-' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a7cb4484-8033-45c2-b256-272d0dc579aa';
    $display->content['new-a7cb4484-8033-45c2-b256-272d0dc579aa'] = $pane;
    $display->panels['middle'][4] = 'new-a7cb4484-8033-45c2-b256-272d0dc579aa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a37966c1-769a-49e7-8108-c00142088775';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              2 => '2',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '68374782-75e0-46a1-8153-cda57c0cd345';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ddeba322-5e70-4faf-813f-be7b1709617d';
    $pane->panel = 'middle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ddeba322-5e70-4faf-813f-be7b1709617d';
    $display->content['new-ddeba322-5e70-4faf-813f-be7b1709617d'] = $pane;
    $display->panels['middle'][0] = 'new-ddeba322-5e70-4faf-813f-be7b1709617d';
    $pane = new stdClass();
    $pane->pid = 'new-fa774869-d48b-4c61-a536-90f225c3b4a6';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_articals';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'col-md-offset-' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-8 delta clearfix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa774869-d48b-4c61-a536-90f225c3b4a6';
    $display->content['new-fa774869-d48b-4c61-a536-90f225c3b4a6'] = $pane;
    $display->panels['middle'][1] = 'new-fa774869-d48b-4c61-a536-90f225c3b4a6';
    $pane = new stdClass();
    $pane->pid = 'new-7b8193ff-02a4-45e3-b4c2-dbe364546840';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<i class="icon icon-move"><a href="/taxonomy/term/sort/%term:tid">Sortierung</a></i>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7b8193ff-02a4-45e3-b4c2-dbe364546840';
    $display->content['new-7b8193ff-02a4-45e3-b4c2-dbe364546840'] = $pane;
    $display->panels['middle'][2] = 'new-7b8193ff-02a4-45e3-b4c2-dbe364546840';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '/taxonomy/term/sort/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ab6ab4f2-88a2-4654-83ef-2483009d7695';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-48bfb4b4-46cb-42f6-b74d-4b5aae2947c3';
    $pane->panel = 'middle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '48bfb4b4-46cb-42f6-b74d-4b5aae2947c3';
    $display->content['new-48bfb4b4-46cb-42f6-b74d-4b5aae2947c3'] = $pane;
    $display->panels['middle'][0] = 'new-48bfb4b4-46cb-42f6-b74d-4b5aae2947c3';
    $pane = new stdClass();
    $pane->pid = 'new-e33bac2d-772b-4be6-a084-65565e1f8449';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_articals';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'col-md-offset-' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-8 delta clearfix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e33bac2d-772b-4be6-a084-65565e1f8449';
    $display->content['new-e33bac2d-772b-4be6-a084-65565e1f8449'] = $pane;
    $display->panels['middle'][1] = 'new-e33bac2d-772b-4be6-a084-65565e1f8449';
    $pane = new stdClass();
    $pane->pid = 'new-cde4325e-b773-40b5-bdf3-f5e333b20ebd';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_articals';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'col-md-offset-' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cde4325e-b773-40b5-bdf3-f5e333b20ebd';
    $display->content['new-cde4325e-b773-40b5-bdf3-f5e333b20ebd'] = $pane;
    $display->panels['middle'][2] = 'new-cde4325e-b773-40b5-bdf3-f5e333b20ebd';
    $pane = new stdClass();
    $pane->pid = 'new-d27802b4-2ba2-4e4f-8d8a-294360384f07';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<i class="icon-pencil"><a href="/taxonomy/term/%term:tid">Sortierung</a></i>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd27802b4-2ba2-4e4f-8d8a-294360384f07';
    $display->content['new-d27802b4-2ba2-4e4f-8d8a-294360384f07'] = $pane;
    $display->panels['middle'][3] = 'new-d27802b4-2ba2-4e4f-8d8a-294360384f07';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'der_steckbrief',
        'keyword' => 'steckbrief',
        'name' => 'entity_from_field:field_steckbrief-user-node',
        'delta' => 0,
        'context' => 'argument_entity_id:user_1',
        'id' => 1,
      ),
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
  $display->title = '';
  $display->uuid = '3578357e-6b6d-4836-b26a-795a50e5371c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd82a721-56aa-4c39-8b12-ef350f869ad5';
    $pane->panel = 'middle';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd82a721-56aa-4c39-8b12-ef350f869ad5';
    $display->content['new-bd82a721-56aa-4c39-8b12-ef350f869ad5'] = $pane;
    $display->panels['middle'][0] = 'new-bd82a721-56aa-4c39-8b12-ef350f869ad5';
    $pane = new stdClass();
    $pane->pid = 'new-a063d378-cc30-4479-8e22-20e638f380d8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'aufgaben-vp_aufgaben';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'arguments' => array(
        'field_verantwortlich_target_id' => '%steckbrief:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a063d378-cc30-4479-8e22-20e638f380d8';
    $display->content['new-a063d378-cc30-4479-8e22-20e638f380d8'] = $pane;
    $display->panels['middle'][1] = 'new-a063d378-cc30-4479-8e22-20e638f380d8';
    $pane = new stdClass();
    $pane->pid = 'new-8fe10609-368b-4d3a-8840-ad738b5e9747';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'aufgaben';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'col-md-offset-' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8fe10609-368b-4d3a-8840-ad738b5e9747';
    $display->content['new-8fe10609-368b-4d3a-8840-ad738b5e9747'] = $pane;
    $display->panels['middle'][2] = 'new-8fe10609-368b-4d3a-8840-ad738b5e9747';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bd82a721-56aa-4c39-8b12-ef350f869ad5';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}
