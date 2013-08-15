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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sortierkriterien: Inhalt: Datum (field_datum) */
  $handler->display->display_options['sorts']['field_datum_value']['id'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['table'] = 'field_data_field_datum';
  $handler->display->display_options['sorts']['field_datum_value']['field'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['expose']['label'] = 'Datum (field_datum)';
  /* Sortierkriterien: Inhalt: Status (field_aufgabe_status) */
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['id'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['table'] = 'field_data_field_aufgabe_status';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['field'] = 'field_aufgabe_status_tid';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_aufgabe_status_tid']['expose']['label'] = 'Status (field_aufgabe_status)';
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
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
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
  $handler->display->display_options['filters']['tid']['value'] = array(
    38 => '38',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'aufgabestatus';

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
    38 => '38',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'aufgabestatus';
  $translatables['aufgaben'] = array(
    t('Master'),
    t('<h4>Aufgaben</h4>'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Titel'),
    t('Ansprechpartner'),
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
  /* Filterkriterium: Taxonomie-Begriff: Auswahl (field_aufgabenart_auswahl) */
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sortierkriterien: Inhalt: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Titel';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
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
    t('Page'),
  );
  $export['firmen'] = $view;

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
  /* Beziehung: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_verbundene_firma_target_id']['id'] = 'field_verbundene_firma_target_id';
  $handler->display->display_options['relationships']['field_verbundene_firma_target_id']['table'] = 'field_data_field_verbundene_firma';
  $handler->display->display_options['relationships']['field_verbundene_firma_target_id']['field'] = 'field_verbundene_firma_target_id';
  /* Beziehung: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_verbundene_firma_node']['id'] = 'reverse_field_verbundene_firma_node';
  $handler->display->display_options['relationships']['reverse_field_verbundene_firma_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_verbundene_firma_node']['field'] = 'reverse_field_verbundene_firma_node';
  /* Beziehung: Entity Reference: Referencing entity */
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
  /* Beziehung: Entity Reference: Referencing entity */
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
  /* Feld: Inhalt: Verbundene Firma */
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Verbundene Firma (field_verbundene_firma) */
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
  /* Feld: Inhalt: Verbundene Firma */
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
  /* Beziehung: Entity Reference: Referencing entity */
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
  $handler->display->display_options['title'] = 'Taxonomy Articals';
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
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
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
  /* Kontextfilter: Inhalt: Inhalt (field_inhalt) */
  $handler->display->display_options['arguments']['field_inhalt_tid']['id'] = 'field_inhalt_tid';
  $handler->display->display_options['arguments']['field_inhalt_tid']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['arguments']['field_inhalt_tid']['field'] = 'field_inhalt_tid';
  $handler->display->display_options['arguments']['field_inhalt_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_inhalt_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_inhalt_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_inhalt_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_inhalt_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_inhalt_tid']['summary_options']['items_per_page'] = '25';
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
    'page' => 'page',
  );

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
  $translatables['taxonomy_articals'] = array(
    t('Master'),
    t('Taxonomy Articals'),
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
    t('Page'),
    t('Tax'),
    t('Tabelle'),
    t('Textkörper'),
    t('Bearbeiten'),
  );
  $export['taxonomy_articals'] = $view;

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
