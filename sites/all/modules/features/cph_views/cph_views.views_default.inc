<?php
/**
 * @file
 * cph_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cph_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aufgabe';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Aufgabe';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aufgabe';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_aufgabe' => 'field_aufgabe',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aufgabe' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Inhalt: Aufgabe */
  $handler->display->display_options['fields']['field_aufgabe']['id'] = 'field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['table'] = 'field_data_field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['field'] = 'field_aufgabe';
  /* Feld: Inhalt: verantwortlich */
  $handler->display->display_options['fields']['field_verantwortlich']['id'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['table'] = 'field_data_field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['field'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Status */
  $handler->display->display_options['fields']['field_aufgabe_status']['id'] = 'field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['field'] = 'field_aufgabe_status';
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'tagmini',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Datum beendet */
  $handler->display->display_options['fields']['field_datum_beendet']['id'] = 'field_datum_beendet';
  $handler->display->display_options['fields']['field_datum_beendet']['table'] = 'field_data_field_datum_beendet';
  $handler->display->display_options['fields']['field_datum_beendet']['field'] = 'field_datum_beendet';
  $handler->display->display_options['fields']['field_datum_beendet']['settings'] = array(
    'format_type' => 'tagmini',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'aufgabe' => 'aufgabe',
  );
  /* Filterkriterium: Inhalt: Aufgabe (field_aufgabe) */
  $handler->display->display_options['filters']['field_aufgabe_tid']['id'] = 'field_aufgabe_tid';
  $handler->display->display_options['filters']['field_aufgabe_tid']['table'] = 'field_data_field_aufgabe';
  $handler->display->display_options['filters']['field_aufgabe_tid']['field'] = 'field_aufgabe_tid';
  $handler->display->display_options['filters']['field_aufgabe_tid']['value'] = array(
    963 => '963',
  );
  $handler->display->display_options['filters']['field_aufgabe_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aufgabe_tid']['expose']['operator_id'] = 'field_aufgabe_tid_op';
  $handler->display->display_options['filters']['field_aufgabe_tid']['expose']['label'] = 'Aufgabe (field_aufgabe)';
  $handler->display->display_options['filters']['field_aufgabe_tid']['expose']['operator'] = 'field_aufgabe_tid_op';
  $handler->display->display_options['filters']['field_aufgabe_tid']['expose']['identifier'] = 'field_aufgabe_tid';
  $handler->display->display_options['filters']['field_aufgabe_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_aufgabe_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_aufgabe_tid']['vocabulary'] = 'aufgabenart';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'aufgabe';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Test - Aufgaben nach Aufgabenart';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-cph-funktionen';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Alle Aufgaben */
  $handler = $view->new_display('page', 'Alle Aufgaben', 'page_1');
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
    'aufgabe' => 'aufgabe',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Status (field_aufgabe_status) */
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['id'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['field'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['value'] = array(
    332 => '332',
    333 => '333',
    330 => '330',
    331 => '331',
  );
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['expose']['operator_id'] = 'field_aufgabe_status_tid_op';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['expose']['label'] = 'Status (field_aufgabe_status)';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['expose']['operator'] = 'field_aufgabe_status_tid_op';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['expose']['identifier'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['vocabulary'] = 'aufgabestatus';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'aufgaben-alle';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Test - Alle aufgaben';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-cph-funktionen';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Seite 2 */
  $handler = $view->new_display('page', 'Seite 2', 'page_2');
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
    'aufgabe' => 'aufgabe',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Status (field_aufgabe_status) */
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['id'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['field'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['value'] = array(
    331 => '331',
  );
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_aufgabe_status_tid']['vocabulary'] = 'aufgabestatus';
  $handler->display->display_options['path'] = 'wiedervorlage';
  $translatables['aufgabe'] = array(
    t('Master'),
    t('Aufgabe'),
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
    t('verantwortlich'),
    t('Status'),
    t('Datum'),
    t('Datum beendet'),
    t('Aufgabe (field_aufgabe)'),
    t('Page'),
    t('Alle Aufgaben'),
    t('Status (field_aufgabe_status)'),
    t('Seite 2'),
  );
  $export['aufgabe'] = $view;

  $view = new view();
  $view->name = 'aufgaben';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Aufgaben';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<h4>Aufgaben</h4>';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ansprechpartner' => 'field_ansprechpartner',
    'field_telefon' => 'field_ansprechpartner',
    'field_aufgabe_status' => 'field_ansprechpartner',
    'field_datum' => 'field_ansprechpartner',
    'field_aufgabe' => 'field_aufgabe',
    'field_bemerkung' => 'field_bemerkung',
    'field_kunde' => 'field_kunde',
    'field_verantwortlich' => 'field_verantwortlich',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ansprechpartner' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'field_telefon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aufgabe_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aufgabe' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bemerkung' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kunde' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_verantwortlich' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_ansprechpartner_target_id_1']['id'] = 'field_ansprechpartner_target_id_1';
  $handler->display->display_options['relationships']['field_ansprechpartner_target_id_1']['table'] = 'field_data_field_ansprechpartner';
  $handler->display->display_options['relationships']['field_ansprechpartner_target_id_1']['field'] = 'field_ansprechpartner_target_id';
  $handler->display->display_options['relationships']['field_ansprechpartner_target_id_1']['relationship'] = 'field_ansprechpartner_target_id';
  $handler->display->display_options['relationships']['field_ansprechpartner_target_id_1']['label'] = 'referenced field_ansprechpartner';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Ansprechpartner */
  $handler->display->display_options['fields']['field_ansprechpartner']['id'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['table'] = 'field_data_field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['field'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Telefon */
  $handler->display->display_options['fields']['field_telefon']['id'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['table'] = 'field_data_field_telefon';
  $handler->display->display_options['fields']['field_telefon']['field'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['relationship'] = 'field_ansprechpartner_target_id_1';
  /* Feld: Inhalt: Status */
  $handler->display->display_options['fields']['field_aufgabe_status']['id'] = 'field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['field'] = 'field_aufgabe_status';
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Termin/Erledigt';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'tagmini',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Aufgabe */
  $handler->display->display_options['fields']['field_aufgabe']['id'] = 'field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['table'] = 'field_data_field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['field'] = 'field_aufgabe';
  /* Feld: Inhalt: Bemerkung */
  $handler->display->display_options['fields']['field_bemerkung']['id'] = 'field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['table'] = 'field_data_field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['field'] = 'field_bemerkung';
  /* Feld: Inhalt: Kunde */
  $handler->display->display_options['fields']['field_kunde']['id'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['table'] = 'field_data_field_kunde';
  $handler->display->display_options['fields']['field_kunde']['field'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: verantwortlich */
  $handler->display->display_options['fields']['field_verantwortlich']['id'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['table'] = 'field_data_field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['field'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['settings'] = array(
    'link' => 0,
  );
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sortierkriterien: Inhalt: Datum (field_datum) */
  $handler->display->display_options['sorts']['field_datum_value']['id'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['table'] = 'field_data_field_datum';
  $handler->display->display_options['sorts']['field_datum_value']['field'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_datum_value']['expose']['label'] = 'Datum (field_datum)';
  /* Sortierkriterien: Inhalt: Status (field_aufgabe_status) */
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['id'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['field'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['expose']['label'] = 'Status (field_aufgabe_status)';
  /* Sortierkriterien: Inhalt: Datum beendet (field_datum_beendet) */
  $handler->display->display_options['sorts']['field_datum_beendet_value']['id'] = 'field_datum_beendet_value';
  $handler->display->display_options['sorts']['field_datum_beendet_value']['table'] = 'field_data_field_datum_beendet';
  $handler->display->display_options['sorts']['field_datum_beendet_value']['field'] = 'field_datum_beendet_value';
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
    'aufgabe' => 'aufgabe',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Block Aufgabe Steckbrief */
  $handler = $view->new_display('block', 'Block Aufgabe Steckbrief', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Aufgabe Firma */
  $handler = $view->new_display('block', 'Aufgabe Firma', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'set1';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'set1';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Inhalt: Status */
  $handler->display->display_options['fields']['field_aufgabe_status']['id'] = 'field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['field'] = 'field_aufgabe_status';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Termin/Erledigt';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'tagmini',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: verantwortlich */
  $handler->display->display_options['fields']['field_verantwortlich']['id'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['table'] = 'field_data_field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['field'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Ansprechpartner */
  $handler->display->display_options['fields']['field_ansprechpartner']['id'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['table'] = 'field_data_field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['field'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Aufgabe */
  $handler->display->display_options['fields']['field_aufgabe']['id'] = 'field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['table'] = 'field_data_field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['field'] = 'field_aufgabe';
  /* Feld: Inhalt: Bemerkung */
  $handler->display->display_options['fields']['field_bemerkung']['id'] = 'field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['table'] = 'field_data_field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['field'] = 'field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_bemerkung']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_bemerkung']['alter']['more_link_path'] = 'content/aufgabe/[nid]';
  $handler->display->display_options['fields']['field_bemerkung']['alter']['trim'] = TRUE;
  /* Feld: Inhalt: Kunde */
  $handler->display->display_options['fields']['field_kunde']['id'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['table'] = 'field_data_field_kunde';
  $handler->display->display_options['fields']['field_kunde']['field'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['label'] = '';
  $handler->display->display_options['fields']['field_kunde']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kunde']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kunde']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Kunde (field_kunde) */
  $handler->display->display_options['arguments']['field_kunde_target_id']['id'] = 'field_kunde_target_id';
  $handler->display->display_options['arguments']['field_kunde_target_id']['table'] = 'field_data_field_kunde';
  $handler->display->display_options['arguments']['field_kunde_target_id']['field'] = 'field_kunde_target_id';
  $handler->display->display_options['arguments']['field_kunde_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_kunde_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_kunde_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_kunde_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_kunde_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_kunde_target_id']['summary_options']['items_per_page'] = '25';
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
  /* Filterkriterium: Inhalt: Datum beendet (field_datum_beendet) */
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['id'] = 'field_datum_beendet_value_1';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['table'] = 'field_data_field_datum_beendet';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['field'] = 'field_datum_beendet_value';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['group'] = 2;
  /* Filterkriterium: Inhalt: Hat einen Taxonomiebegriff */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    331 => '331',
  );
  $handler->display->display_options['filters']['tid']['group'] = 2;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'aufgabestatus';
  /* Filterkriterium: Inhalt: Datum beendet (field_datum_beendet) */
  $handler->display->display_options['filters']['field_datum_beendet_value']['id'] = 'field_datum_beendet_value';
  $handler->display->display_options['filters']['field_datum_beendet_value']['table'] = 'field_data_field_datum_beendet';
  $handler->display->display_options['filters']['field_datum_beendet_value']['field'] = 'field_datum_beendet_value';
  $handler->display->display_options['filters']['field_datum_beendet_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_datum_beendet_value']['group'] = 2;
  $handler->display->display_options['filters']['field_datum_beendet_value']['default_date'] = 'now';

  /* Display: Aufgabe Firma Log */
  $handler = $view->new_display('block', 'Aufgabe Firma Log', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'set1';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'set1';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Inhalt: Status */
  $handler->display->display_options['fields']['field_aufgabe_status']['id'] = 'field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['field'] = 'field_aufgabe_status';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Termin/Erledigt';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'tagmini',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: verantwortlich */
  $handler->display->display_options['fields']['field_verantwortlich']['id'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['table'] = 'field_data_field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['field'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Ansprechpartner */
  $handler->display->display_options['fields']['field_ansprechpartner']['id'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['table'] = 'field_data_field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['field'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Aufgabe */
  $handler->display->display_options['fields']['field_aufgabe']['id'] = 'field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['table'] = 'field_data_field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['field'] = 'field_aufgabe';
  /* Feld: Inhalt: Bemerkung */
  $handler->display->display_options['fields']['field_bemerkung']['id'] = 'field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['table'] = 'field_data_field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['field'] = 'field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_bemerkung']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_bemerkung']['alter']['more_link_path'] = 'content/aufgabe/[nid]';
  $handler->display->display_options['fields']['field_bemerkung']['alter']['trim'] = TRUE;
  /* Feld: Inhalt: Kunde */
  $handler->display->display_options['fields']['field_kunde']['id'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['table'] = 'field_data_field_kunde';
  $handler->display->display_options['fields']['field_kunde']['field'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['label'] = '';
  $handler->display->display_options['fields']['field_kunde']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kunde']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kunde']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Datum beendet (field_datum_beendet) */
  $handler->display->display_options['sorts']['field_datum_beendet_value']['id'] = 'field_datum_beendet_value';
  $handler->display->display_options['sorts']['field_datum_beendet_value']['table'] = 'field_data_field_datum_beendet';
  $handler->display->display_options['sorts']['field_datum_beendet_value']['field'] = 'field_datum_beendet_value';
  $handler->display->display_options['sorts']['field_datum_beendet_value']['order'] = 'DESC';
  /* Sortierkriterien: Inhalt: Datum (field_datum) */
  $handler->display->display_options['sorts']['field_datum_value']['id'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['table'] = 'field_data_field_datum';
  $handler->display->display_options['sorts']['field_datum_value']['field'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_datum_value']['expose']['label'] = 'Datum (field_datum)';
  /* Sortierkriterien: Inhalt: Status (field_aufgabe_status) */
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['id'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['field'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['expose']['label'] = 'Status (field_aufgabe_status)';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Kunde (field_kunde) */
  $handler->display->display_options['arguments']['field_kunde_target_id']['id'] = 'field_kunde_target_id';
  $handler->display->display_options['arguments']['field_kunde_target_id']['table'] = 'field_data_field_kunde';
  $handler->display->display_options['arguments']['field_kunde_target_id']['field'] = 'field_kunde_target_id';
  $handler->display->display_options['arguments']['field_kunde_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_kunde_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_kunde_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_kunde_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_kunde_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_kunde_target_id']['summary_options']['items_per_page'] = '25';
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
  /* Filterkriterium: Inhalt: Hat einen Taxonomiebegriff */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not';
  $handler->display->display_options['filters']['tid']['value'] = array(
    331 => '331',
  );
  $handler->display->display_options['filters']['tid']['group'] = 2;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'aufgabestatus';
  /* Filterkriterium: Inhalt: Datum beendet (field_datum_beendet) */
  $handler->display->display_options['filters']['field_datum_beendet_value']['id'] = 'field_datum_beendet_value';
  $handler->display->display_options['filters']['field_datum_beendet_value']['table'] = 'field_data_field_datum_beendet';
  $handler->display->display_options['filters']['field_datum_beendet_value']['field'] = 'field_datum_beendet_value';
  $handler->display->display_options['filters']['field_datum_beendet_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_datum_beendet_value']['group'] = 2;
  /* Filterkriterium: Inhalt: Datum beendet (field_datum_beendet) */
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['id'] = 'field_datum_beendet_value_1';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['table'] = 'field_data_field_datum_beendet';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['field'] = 'field_datum_beendet_value';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['default_date'] = 'now';

  /* Display: Panel aufgabe */
  $handler = $view->new_display('panel_pane', 'Panel aufgabe', 'vp_aufgaben');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_aufgabe_1' => 'field_aufgabe_1',
    'field_verantwortlich' => 'field_verantwortlich',
    'field_kunde' => 'field_kunde',
    'field_datum' => 'field_datum',
    'field_bemerkung' => 'field_bemerkung',
    'field_ansprechpartner' => 'field_ansprechpartner',
    'field_telefon' => 'field_ansprechpartner',
    'field_aufgabe_status' => 'field_aufgabe_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_aufgabe_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_verantwortlich' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kunde' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bemerkung' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ansprechpartner' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'field_telefon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aufgabe_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '- keine Einträge gefunden -';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Beziehung: Entity Reference: Entität, die verweist */
  $handler->display->display_options['relationships']['reverse_field_ansprechpartner_node']['id'] = 'reverse_field_ansprechpartner_node';
  $handler->display->display_options['relationships']['reverse_field_ansprechpartner_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ansprechpartner_node']['field'] = 'reverse_field_ansprechpartner_node';
  /* Beziehung: Entity Reference: Entität, die verweist */
  $handler->display->display_options['relationships']['reverse_field_ansprechpartner_node_1']['id'] = 'reverse_field_ansprechpartner_node_1';
  $handler->display->display_options['relationships']['reverse_field_ansprechpartner_node_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ansprechpartner_node_1']['field'] = 'reverse_field_ansprechpartner_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Aufgabe */
  $handler->display->display_options['fields']['field_aufgabe_1']['id'] = 'field_aufgabe_1';
  $handler->display->display_options['fields']['field_aufgabe_1']['table'] = 'field_data_field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe_1']['field'] = 'field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe_1']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Inhalt: verantwortlich */
  $handler->display->display_options['fields']['field_verantwortlich']['id'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['table'] = 'field_data_field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['field'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_verantwortlich']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Kunde */
  $handler->display->display_options['fields']['field_kunde']['id'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['table'] = 'field_data_field_kunde';
  $handler->display->display_options['fields']['field_kunde']['field'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['settings'] = array(
    'link' => 1,
  );
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Termin';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'tagmini',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Bemerkung */
  $handler->display->display_options['fields']['field_bemerkung']['id'] = 'field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['table'] = 'field_data_field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['field'] = 'field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_bemerkung']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_bemerkung']['alter']['trim'] = TRUE;
  /* Feld: Inhalt: Ansprechpartner */
  $handler->display->display_options['fields']['field_ansprechpartner']['id'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['table'] = 'field_data_field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['field'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['settings'] = array(
    'link' => 1,
  );
  /* Feld: Inhalt: Telefon */
  $handler->display->display_options['fields']['field_telefon']['id'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['table'] = 'field_data_field_telefon';
  $handler->display->display_options['fields']['field_telefon']['field'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon']['relationship'] = 'reverse_field_ansprechpartner_node';
  /* Feld: Inhalt: Status */
  $handler->display->display_options['fields']['field_aufgabe_status']['id'] = 'field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['field'] = 'field_aufgabe_status';
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Bearbeiten';
  /* Feld: Inhalt: Telefon */
  $handler->display->display_options['fields']['field_telefon_1']['id'] = 'field_telefon_1';
  $handler->display->display_options['fields']['field_telefon_1']['table'] = 'field_data_field_telefon';
  $handler->display->display_options['fields']['field_telefon_1']['field'] = 'field_telefon';
  $handler->display->display_options['fields']['field_telefon_1']['relationship'] = 'reverse_field_ansprechpartner_node_1';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Datum (field_datum) */
  $handler->display->display_options['sorts']['field_datum_value']['id'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['table'] = 'field_data_field_datum';
  $handler->display->display_options['sorts']['field_datum_value']['field'] = 'field_datum_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: verantwortlich (field_verantwortlich) */
  $handler->display->display_options['arguments']['field_verantwortlich_target_id']['id'] = 'field_verantwortlich_target_id';
  $handler->display->display_options['arguments']['field_verantwortlich_target_id']['table'] = 'field_data_field_verantwortlich';
  $handler->display->display_options['arguments']['field_verantwortlich_target_id']['field'] = 'field_verantwortlich_target_id';
  $handler->display->display_options['arguments']['field_verantwortlich_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_verantwortlich_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_verantwortlich_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_verantwortlich_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_verantwortlich_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_verantwortlich_target_id']['summary_options']['items_per_page'] = '25';
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
    'aufgabe' => 'aufgabe',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filterkriterium: Inhalt: Datum beendet (field_datum_beendet) */
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['id'] = 'field_datum_beendet_value_1';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['table'] = 'field_data_field_datum_beendet';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['field'] = 'field_datum_beendet_value';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_datum_beendet_value_1']['default_date'] = 'now';
  /* Filterkriterium: Inhalt: Datum beendet (field_datum_beendet) */
  $handler->display->display_options['filters']['field_datum_beendet_value']['id'] = 'field_datum_beendet_value';
  $handler->display->display_options['filters']['field_datum_beendet_value']['table'] = 'field_data_field_datum_beendet';
  $handler->display->display_options['filters']['field_datum_beendet_value']['field'] = 'field_datum_beendet_value';
  $handler->display->display_options['filters']['field_datum_beendet_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_datum_beendet_value']['group'] = 2;
  $handler->display->display_options['pane_title'] = 'vp Aufgaben';
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';
  $handler->display->display_options['argument_input'] = array(
    'field_verantwortlich_target_id' => array(
      'type' => 'user',
      'context' => 'entity:user.field_steckbrief',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'verantwortlich',
    ),
  );

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Ansprechpartner */
  $handler->display->display_options['fields']['field_ansprechpartner']['id'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['table'] = 'field_data_field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['field'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Status */
  $handler->display->display_options['fields']['field_aufgabe_status']['id'] = 'field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['fields']['field_aufgabe_status']['field'] = 'field_aufgabe_status';
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Termin/Erledigt';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'tagmini',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Aufgabe */
  $handler->display->display_options['fields']['field_aufgabe']['id'] = 'field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['table'] = 'field_data_field_aufgabe';
  $handler->display->display_options['fields']['field_aufgabe']['field'] = 'field_aufgabe';
  /* Feld: Inhalt: Bemerkung */
  $handler->display->display_options['fields']['field_bemerkung']['id'] = 'field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['table'] = 'field_data_field_bemerkung';
  $handler->display->display_options['fields']['field_bemerkung']['field'] = 'field_bemerkung';
  /* Feld: Inhalt: Kunde */
  $handler->display->display_options['fields']['field_kunde']['id'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['table'] = 'field_data_field_kunde';
  $handler->display->display_options['fields']['field_kunde']['field'] = 'field_kunde';
  $handler->display->display_options['fields']['field_kunde']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: verantwortlich */
  $handler->display->display_options['fields']['field_verantwortlich']['id'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['table'] = 'field_data_field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['field'] = 'field_verantwortlich';
  $handler->display->display_options['fields']['field_verantwortlich']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Beitragsdatum';
  /* Sortierkriterien: Inhalt: Datum (field_datum) */
  $handler->display->display_options['sorts']['field_datum_value']['id'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['table'] = 'field_data_field_datum';
  $handler->display->display_options['sorts']['field_datum_value']['field'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_datum_value']['expose']['label'] = 'Datum (field_datum)';
  /* Sortierkriterien: Inhalt: Status (field_aufgabe_status) */
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['id'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['field'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['expose']['label'] = 'Status (field_aufgabe_status)';
  $handler->display->display_options['path'] = 'test';

  /* Display: Seite 2 */
  $handler = $view->new_display('page', 'Seite 2', 'page_2');
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
    'aufgabe' => 'aufgabe',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filterkriterium: Inhalt: Kunde (field_kunde) */
  $handler->display->display_options['filters']['field_kunde_target_id']['id'] = 'field_kunde_target_id';
  $handler->display->display_options['filters']['field_kunde_target_id']['table'] = 'field_data_field_kunde';
  $handler->display->display_options['filters']['field_kunde_target_id']['field'] = 'field_kunde_target_id';
  $handler->display->display_options['filters']['field_kunde_target_id']['operator'] = '<=';
  $handler->display->display_options['filters']['field_kunde_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kunde_target_id']['expose']['operator_id'] = 'field_kunde_target_id_op';
  $handler->display->display_options['filters']['field_kunde_target_id']['expose']['label'] = 'Kunde (field_kunde)';
  $handler->display->display_options['filters']['field_kunde_target_id']['expose']['operator'] = 'field_kunde_target_id_op';
  $handler->display->display_options['filters']['field_kunde_target_id']['expose']['identifier'] = 'field_kunde_target_id';
  $handler->display->display_options['filters']['field_kunde_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filterkriterium: Inhalt: verantwortlich (field_verantwortlich) */
  $handler->display->display_options['filters']['field_verantwortlich_target_id']['id'] = 'field_verantwortlich_target_id';
  $handler->display->display_options['filters']['field_verantwortlich_target_id']['table'] = 'field_data_field_verantwortlich';
  $handler->display->display_options['filters']['field_verantwortlich_target_id']['field'] = 'field_verantwortlich_target_id';
  $handler->display->display_options['filters']['field_verantwortlich_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_verantwortlich_target_id']['expose']['operator_id'] = 'field_verantwortlich_target_id_op';
  $handler->display->display_options['filters']['field_verantwortlich_target_id']['expose']['label'] = 'verantwortlich (field_verantwortlich)';
  $handler->display->display_options['filters']['field_verantwortlich_target_id']['expose']['operator'] = 'field_verantwortlich_target_id_op';
  $handler->display->display_options['filters']['field_verantwortlich_target_id']['expose']['identifier'] = 'field_verantwortlich_target_id';
  $handler->display->display_options['filters']['field_verantwortlich_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'reports/aufgabenliste';
  $translatables['aufgaben'] = array(
    t('Master'),
    t('<h4>Aufgaben</h4>'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('referenced field_ansprechpartner'),
    t('Titel'),
    t('Ansprechpartner'),
    t('Telefon'),
    t('Status'),
    t('Termin/Erledigt'),
    t('Aufgabe'),
    t('Bemerkung'),
    t('Kunde'),
    t('verantwortlich'),
    t('Datum (field_datum)'),
    t('Status (field_aufgabe_status)'),
    t('Typ'),
    t('Block Aufgabe Steckbrief'),
    t('Alle'),
    t('Aufgabe Firma'),
    t('Beitrags-ID'),
    t('Aufgabe Firma Log'),
    t('Panel aufgabe'),
    t('- keine Einträge gefunden -'),
    t('Inhalt referencing Inhalt from field_ansprechpartner'),
    t('Termin'),
    t('Bearbeiten'),
    t('vp Aufgaben'),
    t('Panel-Ansichten'),
    t('Seite'),
    t('‚Bearbeiten‘-Link'),
    t('Beitragsdatum'),
    t('Seite 2'),
    t('Kunde (field_kunde)'),
    t('verantwortlich (field_verantwortlich)'),
  );
  $export['aufgaben'] = $view;

  $view = new view();
  $view->name = 'auswahlliste_aufgabenart';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Auswahlliste Aufgabenart';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filterkriterium: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'aufgabenart' => 'aufgabenart',
  );
  /* Filterkriterium: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['filters']['field_aufgabenart_auswahl_value']['id'] = 'field_aufgabenart_auswahl_value';
  $handler->display->display_options['filters']['field_aufgabenart_auswahl_value']['table'] = 'field_data_field_aufgabenart_auswahl';
  $handler->display->display_options['filters']['field_aufgabenart_auswahl_value']['field'] = 'field_aufgabenart_auswahl_value';
  $handler->display->display_options['filters']['field_aufgabenart_auswahl_value']['value'] = 'a';
  $translatables['auswahlliste_aufgabenart'] = array(
    t('Master'),
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
  );
  $export['auswahlliste_aufgabenart'] = $view;

  $view = new view();
  $view->name = 'dropdown_aufgabenart';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Dropdown - Aufgabenart';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dropdown - Aufgabenart';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'tid' => 'tid',
    'name' => 'name',
  );
  /* Feld: Taxonomie-Begriff: Begriff-ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filterkriterium: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'aufgabenart' => 'aufgabenart',
  );
  /* Filterkriterium: Taxonomie-Begriff: Firma (field_firma_dropdown) */
  $handler->display->display_options['filters']['field_firma_dropdown_value']['id'] = 'field_firma_dropdown_value';
  $handler->display->display_options['filters']['field_firma_dropdown_value']['table'] = 'field_data_field_firma_dropdown';
  $handler->display->display_options['filters']['field_firma_dropdown_value']['field'] = 'field_firma_dropdown_value';
  $handler->display->display_options['filters']['field_firma_dropdown_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_firma_dropdown_value']['value'] = array(
    'nein' => 'nein',
  );

  /* Display: Dropdown - Aufgabenart */
  $handler = $view->new_display('entityreference', 'Dropdown - Aufgabenart', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Aufgabenart';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'tid' => 'tid',
    'name' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['dropdown_aufgabenart'] = array(
    t('Master'),
    t('Dropdown - Aufgabenart'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('.'),
    t(','),
    t('Aufgabenart'),
  );
  $export['dropdown_aufgabenart'] = $view;

  $view = new view();
  $view->name = 'dropdown_tax_firmen_verteiler';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Dropdown Tax Verteiler';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Kontextfilter: Taxonomie-Begriff: Firma (field_status) */
  $handler->display->display_options['arguments']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['arguments']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['arguments']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['arguments']['field_status_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_status_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_status_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_status_value']['default_argument_options']['argument'] = 'aktiv';
  $handler->display->display_options['arguments']['field_status_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_status_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_status_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_status_value']['limit'] = '0';

  /* Display: firmen */
  $handler = $view->new_display('term_reference', 'firmen', 'term_reference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: personen */
  $handler = $view->new_display('term_reference', 'personen', 'term_reference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Taxonomie-Begriff: Personen (field_personen) */
  $handler->display->display_options['arguments']['field_personen_value']['id'] = 'field_personen_value';
  $handler->display->display_options['arguments']['field_personen_value']['table'] = 'field_data_field_personen';
  $handler->display->display_options['arguments']['field_personen_value']['field'] = 'field_personen_value';
  $handler->display->display_options['arguments']['field_personen_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_personen_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_personen_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_personen_value']['default_argument_options']['argument'] = 'aktiv';
  $handler->display->display_options['arguments']['field_personen_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_personen_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_personen_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_personen_value']['limit'] = '0';
  $translatables['dropdown_tax_firmen_verteiler'] = array(
    t('Master'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Alle'),
    t('firmen'),
    t('personen'),
  );
  $export['dropdown_tax_firmen_verteiler'] = $view;

  $view = new view();
  $view->name = 'dropdown_tax_stichwort';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Dropdown Tax Stichwort';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Kontextfilter: Taxonomie-Begriff: Firmen (field_firmen) */
  $handler->display->display_options['arguments']['field_firmen_value']['id'] = 'field_firmen_value';
  $handler->display->display_options['arguments']['field_firmen_value']['table'] = 'field_data_field_firmen';
  $handler->display->display_options['arguments']['field_firmen_value']['field'] = 'field_firmen_value';
  $handler->display->display_options['arguments']['field_firmen_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_firmen_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_firmen_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_firmen_value']['default_argument_options']['argument'] = 'aktiv';
  $handler->display->display_options['arguments']['field_firmen_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_firmen_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_firmen_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_firmen_value']['limit'] = '0';
  /* Filterkriterium: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'firma_stichwort' => 'firma_stichwort',
  );

  /* Display: Term Reference */
  $handler = $view->new_display('term_reference', 'Term Reference', 'term_reference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['dropdown_tax_stichwort'] = array(
    t('Master'),
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
    t('Alle'),
    t('Term Reference'),
  );
  $export['dropdown_tax_stichwort'] = $view;

  $view = new view();
  $view->name = 'dropdown_verantwortlich';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dropdown - Verantwortlich';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Beziehung: Entity Reference: Entität, die verweist */
  $handler->display->display_options['relationships']['reverse_field_steckbrief_user']['id'] = 'reverse_field_steckbrief_user';
  $handler->display->display_options['relationships']['reverse_field_steckbrief_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_steckbrief_user']['field'] = 'reverse_field_steckbrief_user';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filterkriterium: Benutzer: Berechtigung */
  $handler->display->display_options['filters']['permission']['id'] = 'permission';
  $handler->display->display_options['filters']['permission']['table'] = 'role_permission';
  $handler->display->display_options['filters']['permission']['field'] = 'permission';
  $handler->display->display_options['filters']['permission']['relationship'] = 'reverse_field_steckbrief_user';
  $handler->display->display_options['filters']['permission']['value'] = array(
    'create aufgabe content' => 'create aufgabe content',
    'edit own aufgabe content' => 'edit own aufgabe content',
    'edit any aufgabe content' => 'edit any aufgabe content',
  );
  $handler->display->display_options['filters']['permission']['reduce_duplicates'] = TRUE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['dropdown_verantwortlich'] = array(
    t('Master'),
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
    t('Benutzer referencing Inhalt from field_steckbrief'),
    t('Entity Reference'),
  );
  $export['dropdown_verantwortlich'] = $view;

  $view = new view();
  $view->name = 'firmen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Firmen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Unternehmen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Stapelverarbeitungen: Inhalt */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sortierkriterien: Inhalt: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Titel';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Veröffentlicht';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'firma' => 'firma',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'content/company';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Unternehmen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['firmen'] = array(
    t('Master'),
    t('Unternehmen'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Titel'),
    t('Inhalt'),
    t('Veröffentlicht'),
    t('Typ'),
    t('Page'),
  );
  $export['firmen'] = $view;

  $view = new view();
  $view->name = 'kalender_2';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Kalender 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_termin' => 'field_termin',
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Feld: Inhalt: Termin */
  $handler->display->display_options['fields']['field_termin']['id'] = 'field_termin';
  $handler->display->display_options['fields']['field_termin']['table'] = 'field_data_field_termin';
  $handler->display->display_options['fields']['field_termin']['field'] = 'field_termin';
  $handler->display->display_options['fields']['field_termin']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sortierkriterien: Inhalt: Datum (field_datum) */
  $handler->display->display_options['sorts']['field_datum_value']['id'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['table'] = 'field_data_field_datum';
  $handler->display->display_options['sorts']['field_datum_value']['field'] = 'field_datum_value';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_datum.field_datum_value' => 'field_data_field_datum.field_datum_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-datum/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_datum.field_datum_value' => 'field_data_field_datum.field_datum_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-datum/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_datum.field_datum_value' => 'field_data_field_datum.field_datum_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-datum/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = '';
  $handler->display->display_options['fields']['field_datum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_datum']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_datum']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_datum.field_datum_value' => 'field_data_field_datum.field_datum_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-datum/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_datum.field_datum_value' => 'field_data_field_datum.field_datum_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Block der zukünftigen Events.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Datum: Datum (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_datum.field_datum_value' => 'field_data_field_datum.field_datum_value',
  );
  $translatables['kalender_2'] = array(
    t('Master'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Termin'),
    t('Month'),
    t('Alle'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('Upcoming'),
    t('Block der zukünftigen Events.'),
  );
  $export['kalender_2'] = $view;

  $view = new view();
  $view->name = 'liste_bundesland';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Liste nach Bundesland';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Liste nach Bundesland';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'list_standard';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sortierkriterien: Inhalt: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'firma' => 'firma',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filterkriterium: Inhalt: Bundesland (field_bundesland) */
  $handler->display->display_options['filters']['field_bundesland_value']['id'] = 'field_bundesland_value';
  $handler->display->display_options['filters']['field_bundesland_value']['table'] = 'field_data_field_bundesland';
  $handler->display->display_options['filters']['field_bundesland_value']['field'] = 'field_bundesland_value';
  $handler->display->display_options['filters']['field_bundesland_value']['value'] = array(
    'Baden-Württemberg' => 'Baden-Württemberg',
    'Bayern' => 'Bayern',
    'Berkshire' => 'Berkshire',
    'Berlin' => 'Berlin',
    'Brandenburg' => 'Brandenburg',
    'Bremen' => 'Bremen',
    'California' => 'California',
    'CO 80027' => 'CO 80027',
    'Colorado' => 'Colorado',
    'Florida' => 'Florida',
    'Georgia' => 'Georgia',
    'Hamburg' => 'Hamburg',
    'Hampshire' => 'Hampshire',
    'Hertfordshire' => 'Hertfordshire',
    'Hessen' => 'Hessen',
    'Illinois' => 'Illinois',
    'Kalifornien' => 'Kalifornien',
    'Kent' => 'Kent',
    'Mecklenburg-Vorpommern' => 'Mecklenburg-Vorpommern',
    'New South Wales' => 'New South Wales',
    'Niedersachsen' => 'Niedersachsen',
    'Nordrhein-Westphalen' => 'Nordrhein-Westphalen',
    'Ontario' => 'Ontario',
    'Rheinland-Pfalz' => 'Rheinland-Pfalz',
    'Saarland' => 'Saarland',
    'Sachsen' => 'Sachsen',
    'Sachsen-Anhalt' => 'Sachsen-Anhalt',
    'Schleswig-Holstein' => 'Schleswig-Holstein',
    'Scotland' => 'Scotland',
    'Thüringen' => 'Thüringen',
    'Virginia' => 'Virginia',
  );
  $handler->display->display_options['filters']['field_bundesland_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['operator_id'] = 'field_bundesland_value_op';
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['label'] = 'Bundesland (field_bundesland)';
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['operator'] = 'field_bundesland_value_op';
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['identifier'] = 'field_bundesland_value';
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'liste-nach-bundesland';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste nach Bundesland';
  $handler->display->display_options['menu']['name'] = 'menu-cph-funktionen';

  /* Display: Hotelsuche */
  $handler = $view->new_display('page', 'Hotelsuche', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Liste - Unternehmen';
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
    'firma' => 'firma',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Enthält';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
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
  /* Filterkriterium: Inhalt: Branche (field_branche) */
  $handler->display->display_options['filters']['field_branche_tid_1']['id'] = 'field_branche_tid_1';
  $handler->display->display_options['filters']['field_branche_tid_1']['table'] = 'field_data_field_branche';
  $handler->display->display_options['filters']['field_branche_tid_1']['field'] = 'field_branche_tid';
  $handler->display->display_options['filters']['field_branche_tid_1']['value'] = '';
  $handler->display->display_options['filters']['field_branche_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_branche_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_branche_tid_1']['expose']['operator_id'] = 'field_branche_tid_1_op';
  $handler->display->display_options['filters']['field_branche_tid_1']['expose']['label'] = 'Branche';
  $handler->display->display_options['filters']['field_branche_tid_1']['expose']['operator'] = 'field_branche_tid_1_op';
  $handler->display->display_options['filters']['field_branche_tid_1']['expose']['identifier'] = 'field_branche_tid_1';
  $handler->display->display_options['filters']['field_branche_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_branche_tid_1']['vocabulary'] = 'branche';
  /* Filterkriterium: Inhalt: Adresse (field_profil_adresse:locality) */
  $handler->display->display_options['filters']['field_profil_adresse_locality']['id'] = 'field_profil_adresse_locality';
  $handler->display->display_options['filters']['field_profil_adresse_locality']['table'] = 'field_data_field_profil_adresse';
  $handler->display->display_options['filters']['field_profil_adresse_locality']['field'] = 'field_profil_adresse_locality';
  $handler->display->display_options['filters']['field_profil_adresse_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_profil_adresse_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profil_adresse_locality']['expose']['operator_id'] = 'field_profil_adresse_locality_op';
  $handler->display->display_options['filters']['field_profil_adresse_locality']['expose']['label'] = 'Stadt';
  $handler->display->display_options['filters']['field_profil_adresse_locality']['expose']['operator'] = 'field_profil_adresse_locality_op';
  $handler->display->display_options['filters']['field_profil_adresse_locality']['expose']['identifier'] = 'field_profil_adresse_locality';
  $handler->display->display_options['filters']['field_profil_adresse_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filterkriterium: Inhalt: Adresse (field_profil_adresse:postal_code) */
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['id'] = 'field_profil_adresse_postal_code';
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['table'] = 'field_data_field_profil_adresse';
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['field'] = 'field_profil_adresse_postal_code';
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['group'] = 1;
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['expose']['operator_id'] = 'field_profil_adresse_postal_code_op';
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['expose']['label'] = 'PLZ';
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['expose']['description'] = 'beginnt mit … (21, 225,  A-900)';
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['expose']['operator'] = 'field_profil_adresse_postal_code_op';
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['expose']['identifier'] = 'field_profil_adresse_postal_code';
  $handler->display->display_options['filters']['field_profil_adresse_postal_code']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filterkriterium: Inhalt: Bundesland (field_bundesland) */
  $handler->display->display_options['filters']['field_bundesland_value']['id'] = 'field_bundesland_value';
  $handler->display->display_options['filters']['field_bundesland_value']['table'] = 'field_data_field_bundesland';
  $handler->display->display_options['filters']['field_bundesland_value']['field'] = 'field_bundesland_value';
  $handler->display->display_options['filters']['field_bundesland_value']['value'] = array(
    'Baden-Württemberg' => 'Baden-Württemberg',
    'Bayern' => 'Bayern',
    'Berlin' => 'Berlin',
    'Brandenburg' => 'Brandenburg',
    'Bremen' => 'Bremen',
    'Hamburg' => 'Hamburg',
    'Hessen' => 'Hessen',
    'Mecklenburg-Vorpommern' => 'Mecklenburg-Vorpommern',
    'Niedersachsen' => 'Niedersachsen',
    'Nordrhein-Westphalen' => 'Nordrhein-Westphalen',
    'Rheinland-Pfalz' => 'Rheinland-Pfalz',
    'Saarland' => 'Saarland',
    'Sachsen' => 'Sachsen',
    'Sachsen-Anhalt' => 'Sachsen-Anhalt',
    'Schleswig-Holstein' => 'Schleswig-Holstein',
    'Thüringen' => 'Thüringen',
  );
  $handler->display->display_options['filters']['field_bundesland_value']['group'] = 1;
  $handler->display->display_options['filters']['field_bundesland_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['operator_id'] = 'field_bundesland_value_op';
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['label'] = 'Bundesland';
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['operator'] = 'field_bundesland_value_op';
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['identifier'] = 'field_bundesland_value';
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_bundesland_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_bundesland_value']['reduce_duplicates'] = TRUE;
  /* Filterkriterium: Inhalt: Adresse (field_profil_adresse:country) */
  $handler->display->display_options['filters']['field_profil_adresse_country']['id'] = 'field_profil_adresse_country';
  $handler->display->display_options['filters']['field_profil_adresse_country']['table'] = 'field_data_field_profil_adresse';
  $handler->display->display_options['filters']['field_profil_adresse_country']['field'] = 'field_profil_adresse_country';
  $handler->display->display_options['filters']['field_profil_adresse_country']['group'] = 1;
  $handler->display->display_options['filters']['field_profil_adresse_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profil_adresse_country']['expose']['operator_id'] = 'field_profil_adresse_country_op';
  $handler->display->display_options['filters']['field_profil_adresse_country']['expose']['label'] = 'Land (Country)';
  $handler->display->display_options['filters']['field_profil_adresse_country']['expose']['operator'] = 'field_profil_adresse_country_op';
  $handler->display->display_options['filters']['field_profil_adresse_country']['expose']['identifier'] = 'field_profil_adresse_country';
  $handler->display->display_options['filters']['field_profil_adresse_country']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'hotels';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Unternehmen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['liste_bundesland'] = array(
    t('Master'),
    t('Liste nach Bundesland'),
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
    t('Typ'),
    t('Bundesland (field_bundesland)'),
    t('Page'),
    t('Hotelsuche'),
    t('Liste - Unternehmen'),
    t('Name'),
    t('Enthält'),
    t('Branche'),
    t('Stadt'),
    t('PLZ'),
    t('beginnt mit … (21, 225,  A-900)'),
    t('Bundesland'),
    t('Land (Country)'),
  );
  $export['liste_bundesland'] = $view;

  $view = new view();
  $view->name = 'liste_der_aufgabenart';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Liste der Aufgabenart';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Liste der Aufgabenart';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'aufgabe' => 'aufgabe',
  );
  /* Filterkriterium: Inhalt: Aufgabe (field_aufgabe) */
  $handler->display->display_options['filters']['field_aufgabe_tid']['id'] = 'field_aufgabe_tid';
  $handler->display->display_options['filters']['field_aufgabe_tid']['table'] = 'field_data_field_aufgabe';
  $handler->display->display_options['filters']['field_aufgabe_tid']['field'] = 'field_aufgabe_tid';
  $handler->display->display_options['filters']['field_aufgabe_tid']['value'] = array(
    974 => '974',
  );
  $handler->display->display_options['filters']['field_aufgabe_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_aufgabe_tid']['vocabulary'] = 'aufgabenart';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'liste-der-aufgabenart';
  $translatables['liste_der_aufgabenart'] = array(
    t('Master'),
    t('Liste der Aufgabenart'),
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
    t('Page'),
  );
  $export['liste_der_aufgabenart'] = $view;

  $view = new view();
  $view->name = 'personen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Personen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_verbundene_firma_target_id']['id'] = 'field_verbundene_firma_target_id';
  $handler->display->display_options['relationships']['field_verbundene_firma_target_id']['table'] = 'field_data_field_verbundene_firma';
  $handler->display->display_options['relationships']['field_verbundene_firma_target_id']['field'] = 'field_verbundene_firma_target_id';
  /* Beziehung: Entity Reference: Entität, die verweist */
  $handler->display->display_options['relationships']['reverse_field_verbundene_firma_node']['id'] = 'reverse_field_verbundene_firma_node';
  $handler->display->display_options['relationships']['reverse_field_verbundene_firma_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_verbundene_firma_node']['field'] = 'reverse_field_verbundene_firma_node';
  /* Beziehung: Entity Reference: Entität, die verweist */
  $handler->display->display_options['relationships']['reverse_field_verbundene_firma_node_1']['id'] = 'reverse_field_verbundene_firma_node_1';
  $handler->display->display_options['relationships']['reverse_field_verbundene_firma_node_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_verbundene_firma_node_1']['field'] = 'reverse_field_verbundene_firma_node';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['personen'] = array(
    t('Master'),
    t('Personen'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Inhalt entity referenced from field_verbundene_firma'),
    t('Inhalt referencing Inhalt from field_verbundene_firma'),
    t('Alle'),
    t('Block'),
  );
  $export['personen'] = $view;

  $view = new view();
  $view->name = 'steckbrief';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Steckbrief';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ansprechpartner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_department' => 'field_department',
    'score' => 'score',
    'field_verbundene_firma' => 'field_verbundene_firma',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_department' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_verbundene_firma' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Beziehung: Entity Reference: Entität, die verweist */
  $handler->display->display_options['relationships']['reverse_field_kunde_node']['id'] = 'reverse_field_kunde_node';
  $handler->display->display_options['relationships']['reverse_field_kunde_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_kunde_node']['field'] = 'reverse_field_kunde_node';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Inhalt: Abteilung */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  /* Feld: Suche: Ergebnis */
  $handler->display->display_options['fields']['score']['id'] = 'score';
  $handler->display->display_options['fields']['score']['table'] = 'search_index';
  $handler->display->display_options['fields']['score']['field'] = 'score';
  $handler->display->display_options['fields']['score']['precision'] = '0';
  /* Feld: Inhalt: Firma */
  $handler->display->display_options['fields']['field_verbundene_firma']['id'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['table'] = 'field_data_field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['field'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['label'] = '';
  $handler->display->display_options['fields']['field_verbundene_firma']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_verbundene_firma']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_verbundene_firma']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_verbundene_firma']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_verbundene_firma']['settings'] = array(
    'view_mode' => 'token',
    'links' => 0,
  );
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Neue Aufgabe';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/aufgabe?field_ansprechpartner=[nid]&field_kunde=[field_verbundene_firma]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Firmen Block */
  $handler = $view->new_display('block', 'Firmen Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'set1';
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'set1';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Haupt-Ansprechpartner (field_hauptap) */
  $handler->display->display_options['sorts']['field_hauptap_value']['id'] = 'field_hauptap_value';
  $handler->display->display_options['sorts']['field_hauptap_value']['table'] = 'field_data_field_hauptap';
  $handler->display->display_options['sorts']['field_hauptap_value']['field'] = 'field_hauptap_value';
  /* Sortierkriterien: Inhalt: Nachname (field_surename) */
  $handler->display->display_options['sorts']['field_surename_value']['id'] = 'field_surename_value';
  $handler->display->display_options['sorts']['field_surename_value']['table'] = 'field_data_field_surename';
  $handler->display->display_options['sorts']['field_surename_value']['field'] = 'field_surename_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Firma (field_verbundene_firma) */
  $handler->display->display_options['arguments']['field_verbundene_firma_target_id']['id'] = 'field_verbundene_firma_target_id';
  $handler->display->display_options['arguments']['field_verbundene_firma_target_id']['table'] = 'field_data_field_verbundene_firma';
  $handler->display->display_options['arguments']['field_verbundene_firma_target_id']['field'] = 'field_verbundene_firma_target_id';
  $handler->display->display_options['arguments']['field_verbundene_firma_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_verbundene_firma_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_verbundene_firma_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_verbundene_firma_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_verbundene_firma_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_verbundene_firma_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Profile - alle */
  $handler = $view->new_display('page', 'Profile - alle', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'content/profil';
  $handler->display->display_options['menu']['title'] = 'Ansprechpartner';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Links */
  $handler = $view->new_display('block', 'Links', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Abteilung */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  /* Feld: Suche: Ergebnis */
  $handler->display->display_options['fields']['score']['id'] = 'score';
  $handler->display->display_options['fields']['score']['table'] = 'search_index';
  $handler->display->display_options['fields']['score']['field'] = 'score';
  $handler->display->display_options['fields']['score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['score']['precision'] = '0';
  /* Feld: Inhalt: Firma */
  $handler->display->display_options['fields']['field_verbundene_firma']['id'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['table'] = 'field_data_field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['field'] = 'field_verbundene_firma';
  $handler->display->display_options['fields']['field_verbundene_firma']['label'] = '';
  $handler->display->display_options['fields']['field_verbundene_firma']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_verbundene_firma']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_verbundene_firma']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_verbundene_firma']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_verbundene_firma']['settings'] = array(
    'view_mode' => 'token',
    'links' => 0,
  );
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Neue Aufgabe';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/aufgabe?field_ansprechpartner=[nid]&field_kunde=[field_verbundene_firma]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Mein Profil - Steckbrief */
  $handler = $view->new_display('block', 'Mein Profil - Steckbrief', 'block_2');
  $handler->display->display_options['display_description'] = 'Mein Profil - Steckbrief';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Beziehung: Entity Reference: Entität, die verweist */
  $handler->display->display_options['relationships']['reverse_field_steckbrief_user']['id'] = 'reverse_field_steckbrief_user';
  $handler->display->display_options['relationships']['reverse_field_steckbrief_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_steckbrief_user']['field'] = 'reverse_field_steckbrief_user';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['steckbrief'] = array(
    t('Master'),
    t('Ansprechpartner'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Inhalt referencing Inhalt from field_kunde'),
    t('Abteilung'),
    t('Ergebnis'),
    t('.'),
    t(','),
    t('Neue Aufgabe'),
    t('Firmen Block'),
    t('Alle'),
    t('Profile - alle'),
    t('Links'),
    t('Mein Profil - Steckbrief'),
    t('Benutzer referencing Inhalt from field_steckbrief'),
  );
  $export['steckbrief'] = $view;

  $view = new view();
  $view->name = 'taxonomy_articals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy Articals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomy-articals';

  /* Display: Tax */
  $handler = $view->new_display('block', 'Tax', 'block_1');

  /* Display: Tabelle */
  $handler = $view->new_display('block', 'Tabelle', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'grid-3';
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Textkörper';
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Bearbeiten';

  /* Display: Sortieren */
  $handler = $view->new_display('page', 'Sortieren', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Draggableviews: Inhalt */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Inhalt: Alle Taxononmiebegriffe */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Seite';
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'aufgabenart' => 0,
    'aufgabestatus' => 0,
    'branche' => 0,
    'firma_stichwort' => 0,
    'firma_verteiler' => 0,
    'inhalte' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Draggableviews: Gewichtung */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'taxonomy/term/sort/%';

  /* Display: Panel sort */
  $handler = $view->new_display('panel_pane', 'Panel sort', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Draggableviews: Inhalt */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';
  $translatables['taxonomy_articals'] = array(
    t('Master'),
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
    t('Page'),
    t('Tax'),
    t('Tabelle'),
    t('Textkörper'),
    t('Bearbeiten'),
    t('Sortieren'),
    t('Inhalt'),
    t('Seite'),
    t('Panel sort'),
    t('Panel-Ansichten'),
  );
  $export['taxonomy_articals'] = $view;

  $view = new view();
  $view->name = 'taxonomy_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'taxonomy Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filterkriterium: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'firma_verteiler' => 'firma_verteiler',
  );

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Taxonomie-Vokabular: Maschinenlesbarer Name */
  $handler->display->display_options['arguments']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['arguments']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['arguments']['machine_name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['machine_name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['machine_name']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['machine_name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['machine_name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['machine_name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['machine_name']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Taxonomie-Begriff: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'taxonomy/%';
  $translatables['taxonomy_lists'] = array(
    t('Master'),
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
    t('Seite'),
    t('Alle'),
    t('Name'),
  );
  $export['taxonomy_lists'] = $view;

  $view = new view();
  $view->name = 'userlist';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Liste';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Liste';
  $handler->display->display_options['css_class'] = 'grid-12 alpha clearfix';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 40, 60, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_sex' => 'field_sex',
    'picture' => 'picture',
    'data' => 'data',
    'mail' => 'mail',
    'login' => 'login',
    'access' => 'access',
    'view_user' => 'view_user',
    'field_surename' => 'field_surename',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sex' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'data' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surename' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Beziehung: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'Profil';
  /* Feld: Benutzer: Bild */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Feld: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['fields']['field_firma']['id'] = 'field_firma';
  $handler->display->display_options['fields']['field_firma']['table'] = 'field_data_field_firma';
  $handler->display->display_options['fields']['field_firma']['field'] = 'field_firma';
  $handler->display->display_options['fields']['field_firma']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_firma']['label'] = 'Firma';
  /* Feld: Inhalt: Vorname */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  /* Feld: Inhalt: Nachname */
  $handler->display->display_options['fields']['field_surename']['id'] = 'field_surename';
  $handler->display->display_options['fields']['field_surename']['table'] = 'field_data_field_surename';
  $handler->display->display_options['fields']['field_surename']['field'] = 'field_surename';
  /* Feld: Benutzer: E-Mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Feld: Benutzer: Daten */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'users';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  /* Feld: Benutzer: Rollen */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Feld: Benutzer: Letzte Anmeldung */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'long';
  /* Feld: Benutzer: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  /* Sortierkriterien: Inhalt: Nachname (field_surename) */
  $handler->display->display_options['sorts']['field_surename_value']['id'] = 'field_surename_value';
  $handler->display->display_options['sorts']['field_surename_value']['table'] = 'field_data_field_surename';
  $handler->display->display_options['sorts']['field_surename_value']['field'] = 'field_surename_value';
  $handler->display->display_options['sorts']['field_surename_value']['expose']['label'] = 'Nachname';
  /* Filterkriterium: Inhalt: Nachname (field_surename) */
  $handler->display->display_options['filters']['field_surename_value']['id'] = 'field_surename_value';
  $handler->display->display_options['filters']['field_surename_value']['table'] = 'field_data_field_surename';
  $handler->display->display_options['filters']['field_surename_value']['field'] = 'field_surename_value';
  $handler->display->display_options['filters']['field_surename_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_surename_value']['group'] = 1;
  $handler->display->display_options['filters']['field_surename_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_surename_value']['expose']['operator_id'] = 'field_surename_value_op';
  $handler->display->display_options['filters']['field_surename_value']['expose']['label'] = 'Nachname';
  $handler->display->display_options['filters']['field_surename_value']['expose']['operator'] = 'field_surename_value_op';
  $handler->display->display_options['filters']['field_surename_value']['expose']['identifier'] = 'field_surename_value';
  $handler->display->display_options['filters']['field_surename_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filterkriterium: Benutzer: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Rollen';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['rid']['group_info']['label'] = 'Rollen';
  $handler->display->display_options['filters']['rid']['group_info']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['rid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filterkriterium: Benutzer: Benutzer-ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/lists/user-liste';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste der Benutzer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-cph-funktionen';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['userlist'] = array(
    t('Master'),
    t('User Liste'),
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
    t('Profil'),
    t('Bild'),
    t('Firma'),
    t('Vorname'),
    t('Nachname'),
    t('E-Mail'),
    t('Daten'),
    t('Rollen'),
    t('Letzte Anmeldung'),
    t('Link'),
    t('Page'),
  );
  $export['userlist'] = $view;

  return $export;
}
