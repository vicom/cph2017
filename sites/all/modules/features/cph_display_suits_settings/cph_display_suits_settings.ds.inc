<?php
/**
 * @file
 * cph_display_suits_settings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cph_display_suits_settings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|aufgabe|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'aufgabe';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'small',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'author',
    ),
    'field_kunde' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'grid-3',
        ),
      ),
    ),
  );
  $export['node|aufgabe|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|firma|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'firma';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|firma|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|firma|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'firma';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2 span4',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|firma|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|firma|set1';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'firma';
  $ds_fieldsetting->view_mode = 'set1';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_branche' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|firma|set1'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '5',
      'label' => 'inline',
      'format' => 'ds_post_date_short',
    ),
    'field_bild' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'grid-3',
        ),
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'grid-3',
        ),
      ),
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'inline',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'grid-3',
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'inline',
      'format' => 'ds_post_date_short',
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'grid-3',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'grid-2',
        ),
      ),
    ),
    'field_dokument' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'grid-3',
        ),
      ),
    ),
    'field_bild' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'grid-2',
        ),
      ),
    ),
  );
  $export['node|page|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|steckbrief|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'steckbrief';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'steckbrief_name_komplett' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|steckbrief|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|steckbrief|set1';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'steckbrief';
  $ds_fieldsetting->view_mode = 'set1';
  $ds_fieldsetting->settings = array(
    'edit' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'neue_aufgabe' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:1;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:5:"block";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:8:"aufgaben";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'steckbrief_name_komplett' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_titel' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_telefon' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'T',
        ),
      ),
    ),
  );
  $export['node|steckbrief|set1'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|inhalte|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'inhalte';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['taxonomy_term|inhalte|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function cph_display_suits_settings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'edit';
  $ds_field->label = 'Bearbeiten';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => ' <a  href="/node/[node:nid]/edit/">bearbeiten</a> ',
      'format' => 'filtered_html',
    ),
    'use_token' => 1,
  );
  $export['edit'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'neue_aufgabe';
  $ds_field->label = 'Neue Aufgabe';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => ' <a  href="/node/add/aufgabe?field_ansprechpartner=[node:nid]&amp;field_kunde=[node:field-verbundene-firma:nid]">Neue Aufgabe</a> 

',
      'format' => 'filtered_html',
    ),
    'use_token' => 1,
  );
  $export['neue_aufgabe'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'steckbrief_name_komplett';
  $ds_field->label = 'steckbrief-name-komplett';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:field-surename], [node:field-firstname] [node:title]',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['steckbrief_name_komplett'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cph_display_suits_settings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|aufgabe|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'aufgabe';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_kunde',
        1 => 'author',
        2 => 'field_verantwortlich',
        3 => 'title',
        4 => 'field_aufgabe_status',
        5 => 'field_datum',
        6 => 'field_aufgabe',
        7 => 'field_bemerkung',
      ),
    ),
    'fields' => array(
      'field_kunde' => 'ds_content',
      'author' => 'ds_content',
      'field_verantwortlich' => 'ds_content',
      'title' => 'ds_content',
      'field_aufgabe_status' => 'ds_content',
      'field_datum' => 'ds_content',
      'field_aufgabe' => 'ds_content',
      'field_bemerkung' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|aufgabe|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|aufgabe|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'aufgabe';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_kunde',
        1 => 'field_ansprechpartner',
        2 => 'field_ansprechpartner_alt',
        3 => 'field_verantwortlich',
        4 => 'title',
        5 => 'field_bemerkung',
      ),
      'right' => array(
        6 => 'field_aufgabe_status',
        7 => 'field_datum',
        8 => 'field_aufgabe',
        9 => 'field_datum_beendet',
      ),
      'ds_hidden' => array(
        10 => 'path',
      ),
      'hidden' => array(
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_kunde' => 'left',
      'field_ansprechpartner' => 'left',
      'field_ansprechpartner_alt' => 'left',
      'field_verantwortlich' => 'left',
      'title' => 'left',
      'field_bemerkung' => 'left',
      'field_aufgabe_status' => 'right',
      'field_datum' => 'right',
      'field_aufgabe' => 'right',
      'field_datum_beendet' => 'right',
      'path' => 'ds_hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|aufgabe|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|aufgabe|set1';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'aufgabe';
  $ds_layout->view_mode = 'set1';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ansprechpartner',
        1 => 'field_ansprechpartner_alt',
        2 => 'field_verantwortlich',
        3 => 'field_aufgabe_status',
        4 => 'field_datum',
        5 => 'field_aufgabe',
        6 => 'field_bemerkung',
        7 => 'field_datum_beendet',
      ),
    ),
    'fields' => array(
      'field_ansprechpartner' => 'ds_content',
      'field_ansprechpartner_alt' => 'ds_content',
      'field_verantwortlich' => 'ds_content',
      'field_aufgabe_status' => 'ds_content',
      'field_datum' => 'ds_content',
      'field_aufgabe' => 'ds_content',
      'field_bemerkung' => 'ds_content',
      'field_datum_beendet' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'well well-small' => 'well well-small',
      ),
      'ds_content' => array(
        'span6' => 'span6',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|aufgabe|set1'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|aufgabe|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'aufgabe';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
  );
  $export['node|aufgabe|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|firma|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'firma';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'title',
        1 => 'field_profil_adresse',
        2 => 'field_internet',
      ),
    ),
    'fields' => array(
      'title' => 'middle',
      'field_profil_adresse' => 'middle',
      'field_internet' => 'middle',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'middle' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|firma|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|firma|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'firma';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_profil_adresse',
        2 => 'field_telefon',
        3 => 'field_telefax',
        4 => 'field_e_mail',
      ),
      'right' => array(
        5 => 'field_internet',
        6 => 'field_postfach',
        7 => 'field_adr_herkunft',
      ),
      'hidden' => array(
        8 => 'path',
        9 => 'field_titel',
        10 => 'field_kd_nr_alt',
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_profil_adresse' => 'left',
      'field_telefon' => 'left',
      'field_telefax' => 'left',
      'field_e_mail' => 'left',
      'field_internet' => 'right',
      'field_postfach' => 'right',
      'field_adr_herkunft' => 'right',
      'path' => 'hidden',
      'field_titel' => 'hidden',
      'field_kd_nr_alt' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|firma|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|firma|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'firma';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_profil_adresse',
        2 => 'field_telefon',
        3 => 'field_telefax',
        4 => 'field_e_mail',
        5 => 'field_internet',
        6 => 'field_postfach',
        7 => 'field_adr_herkunft',
        8 => 'field_titel',
        9 => 'field_kd_nr_alt',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_profil_adresse' => 'ds_content',
      'field_telefon' => 'ds_content',
      'field_telefax' => 'ds_content',
      'field_e_mail' => 'ds_content',
      'field_internet' => 'ds_content',
      'field_postfach' => 'ds_content',
      'field_adr_herkunft' => 'ds_content',
      'field_titel' => 'ds_content',
      'field_kd_nr_alt' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => 'row',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|firma|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|firma|set1';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'firma';
  $ds_layout->view_mode = 'set1';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_profil_adresse',
        2 => 'field_telefon',
        3 => 'field_telefax',
        4 => 'field_e_mail',
        5 => 'field_internet',
        6 => 'field_branche',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_profil_adresse' => 'ds_content',
      'field_telefon' => 'ds_content',
      'field_telefax' => 'ds_content',
      'field_e_mail' => 'ds_content',
      'field_internet' => 'ds_content',
      'field_branche' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|firma|set1'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|firma|set2';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'firma';
  $ds_layout->view_mode = 'set2';
  $ds_layout->layout = 'panels-onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'field_branche',
      ),
    ),
    'fields' => array(
      'field_branche' => 'middle',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'middle' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|firma|set2'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_inhalt',
        1 => 'title',
        2 => 'field_bild',
        3 => 'body',
      ),
      'right' => array(
        4 => 'post_date',
        5 => 'author',
        6 => 'field_verbundene_firma',
        7 => 'field_dokument',
      ),
    ),
    'fields' => array(
      'field_inhalt' => 'left',
      'title' => 'left',
      'field_bild' => 'left',
      'body' => 'left',
      'post_date' => 'right',
      'author' => 'right',
      'field_verbundene_firma' => 'right',
      'field_dokument' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_inhalt',
        1 => 'title',
        2 => 'field_bild',
      ),
      'left' => array(
        3 => 'body',
      ),
      'right' => array(
        4 => 'field_verbundene_firma',
        5 => 'field_dokument',
      ),
      'hidden' => array(
        6 => 'path',
        7 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_inhalt' => 'header',
      'title' => 'header',
      'field_bild' => 'header',
      'body' => 'left',
      'field_verbundene_firma' => 'right',
      'field_dokument' => 'right',
      'path' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|page|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'title',
        1 => 'field_bild',
        2 => 'body',
        3 => 'post_date',
        4 => 'author',
        5 => 'field_dokument',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'middle',
      'field_bild' => 'middle',
      'body' => 'middle',
      'post_date' => 'middle',
      'author' => 'middle',
      'field_dokument' => 'middle',
      'node_link' => 'middle',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'middle' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|page|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|steckbrief|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'steckbrief';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-twocol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_titel',
        1 => 'field_firstname',
        2 => 'field_surename',
        3 => 'field_department',
      ),
      'right' => array(
        4 => 'field_verbundene_firma',
      ),
    ),
    'fields' => array(
      'field_titel' => 'left',
      'field_firstname' => 'left',
      'field_surename' => 'left',
      'field_department' => 'left',
      'field_verbundene_firma' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|steckbrief|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|steckbrief|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'steckbrief';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'middle' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'steckbrief_name_komplett',
        1 => 'field_department',
        2 => 'field_titel',
        3 => 'field_verbundene_firma',
      ),
      'ds_hidden' => array(
        0 => 'field_surename',
      ),
    ),
    'fields' => array(
      'steckbrief_name_komplett' => 'ds_content',
      'field_department' => 'ds_content',
      'field_titel' => 'ds_content',
      'field_verbundene_firma' => 'ds_content',
      'field_surename' => 'ds_hidden',
    ),
  );
  $export['node|steckbrief|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|steckbrief|set1';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'steckbrief';
  $ds_layout->view_mode = 'set1';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_titel',
        1 => 'steckbrief_name_komplett',
        2 => 'field_funktion',
        3 => 'field_department',
        4 => 'field_telefon',
        5 => 'neue_aufgabe',
        6 => 'edit',
      ),
    ),
    'fields' => array(
      'field_titel' => 'ds_content',
      'steckbrief_name_komplett' => 'ds_content',
      'field_funktion' => 'ds_content',
      'field_department' => 'ds_content',
      'field_telefon' => 'ds_content',
      'neue_aufgabe' => 'ds_content',
      'edit' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'span4' => 'span4',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|steckbrief|set1'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|inhalte|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'inhalte';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'description' => 'ds_content',
    ),
  );
  $export['taxonomy_term|inhalte|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|form';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'account',
        2 => 'timezone',
      ),
      'hidden' => array(
        1 => 'profile_main',
        3 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'account' => 'left',
      'profile_main' => 'hidden',
      'timezone' => 'left',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['user|user|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-twocol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
        1 => 'field_titel',
        2 => 'field_sex',
        3 => 'field_firstname',
        4 => 'field_surename',
      ),
      'right' => array(
        5 => 'summary',
        6 => 'profile_main',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'field_titel' => 'left',
      'field_sex' => 'left',
      'field_firstname' => 'left',
      'field_surename' => 'left',
      'summary' => 'right',
      'profile_main' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['user|user|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function cph_display_suits_settings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'set1';
  $ds_view_mode->label = 'Set1';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['set1'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'set2';
  $ds_view_mode->label = 'Set2';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['set2'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'set3';
  $ds_view_mode->label = 'Set3';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['set3'] = $ds_view_mode;

  return $export;
}
