<?php
/**
 * @file
 * views_toolviews.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_toolviews_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tool_steckbrief_ohne_firma';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'tool - Steckbrief ohne Firma';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Liste - Personen ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Inhalt: Firma */
  $handler->display->display_options['fields']['field_verbundene_firma']['id'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['table'] = 'field_data_field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['field'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Alle Taxononmiebegriffe */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  /* Sortierkriterien: Inhalt: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sortierkriterien: Inhalt: Nachname (field_surename) */
  $handler->display->display_options['sorts']['field_surename_value']['id'] = 'field_surename_value';
  $handler->display->display_options['sorts']['field_surename_value']['table'] = 'field_data_field_surename';
  $handler->display->display_options['sorts']['field_surename_value']['field'] = 'field_surename_value';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'steckbrief' => 'steckbrief',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tool_steckbrief-ohne-firma';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'tool - Steckbrief ohne Firma';
  $handler->display->display_options['menu']['name'] = 'menu-cph-funktionen';

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_verbundene_firma_target_id']['id'] = 'field_verbundene_firma_target_id';
  $handler->display->display_options['relationships']['field_verbundene_firma_target_id']['table'] = 'field_data_field_verbundene_firma';
  $handler->display->display_options['relationships']['field_verbundene_firma_target_id']['field'] = 'field_verbundene_firma_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Inhalt: Vorname */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  /* Feld: Inhalt: Firma */
  $handler->display->display_options['fields']['field_verbundene_firma']['id'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['table'] = 'field_data_field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['field'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['label'] = 'Verbundene Firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['settings'] = array(
    'link' => 1,
  );
  /* Feld: Inhalt: Alle Taxononmiebegriffe */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['relationship'] = 'field_verbundene_firma_target_id';
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'aufgabenart' => 0,
    'aufgabestatus' => 0,
    'branche' => 0,
    'firma_stichwort' => 0,
    'firma_verteiler' => 0,
    'inhalte' => 0,
    'tags' => 0,
  );
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Bearbeiten';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'steckbrief' => 'steckbrief',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Bei neuen Adressen der Name (Beispiel:"Sabine Fuchs"", bei alten Adressen nur der Nachname (Beispiel:"Fuchs")';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'Nachname';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filterkriterium: Inhalt: Titel */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  /* Filterkriterium: Inhalt: Vorname (field_firstname) */
  $handler->display->display_options['filters']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['filters']['field_firstname_value']['field'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_firstname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator_id'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['label'] = 'Vorname (field_firstname)';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['identifier'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filterkriterium: Inhalt: Nachname (field_surename) */
  $handler->display->display_options['filters']['field_surename_value']['id'] = 'field_surename_value';
  $handler->display->display_options['filters']['field_surename_value']['table'] = 'field_data_field_surename';
  $handler->display->display_options['filters']['field_surename_value']['field'] = 'field_surename_value';
  $handler->display->display_options['filters']['field_surename_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_surename_value']['expose']['operator_id'] = 'field_surename_value_op';
  $handler->display->display_options['filters']['field_surename_value']['expose']['label'] = 'Nachname (field_surename)';
  $handler->display->display_options['filters']['field_surename_value']['expose']['description'] = 'nur optional';
  $handler->display->display_options['filters']['field_surename_value']['expose']['operator'] = 'field_surename_value_op';
  $handler->display->display_options['filters']['field_surename_value']['expose']['identifier'] = 'field_surename_value';
  $handler->display->display_options['filters']['field_surename_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'Steckbrief';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste - Personen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'field_verbundene_firma' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nid' => 'nid',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhaltsversion: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '([nid])';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Firma */
  $handler->display->display_options['fields']['field_verbundene_firma']['id'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['table'] = 'field_data_field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['field'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Nachname (field_surename) */
  $handler->display->display_options['sorts']['field_surename_value']['id'] = 'field_surename_value';
  $handler->display->display_options['sorts']['field_surename_value']['table'] = 'field_data_field_surename';
  $handler->display->display_options['sorts']['field_surename_value']['field'] = 'field_surename_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'steckbrief' => 'steckbrief',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Nachname (field_surename) */
  $handler->display->display_options['filters']['field_surename_value']['id'] = 'field_surename_value';
  $handler->display->display_options['filters']['field_surename_value']['table'] = 'field_data_field_surename';
  $handler->display->display_options['filters']['field_surename_value']['field'] = 'field_surename_value';
  $handler->display->display_options['filters']['field_surename_value']['operator'] = 'not empty';
  $translatables['tool_steckbrief_ohne_firma'] = array(
    t('Master'),
    t('Liste - Personen '),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('nächste Seite ›'),
    t('letzte Seite »'),
    t('Titel'),
    t('Firma'),
    t('Alle Taxononmiebegriffe'),
    t('Page'),
    t('Seite'),
    t('Inhalt entity referenced from field_verbundene_firma'),
    t('Name'),
    t('Vorname'),
    t('Verbundene Firma'),
    t('Bearbeiten'),
    t('Bei neuen Adressen der Name (Beispiel:"Sabine Fuchs"", bei alten Adressen nur der Nachname (Beispiel:"Fuchs")'),
    t('Vorname (field_firstname)'),
    t('Nachname (field_surename)'),
    t('nur optional'),
    t('Entity Reference'),
    t('([nid])'),
  );
  $export['tool_steckbrief_ohne_firma'] = $view;

  return $export;
}
