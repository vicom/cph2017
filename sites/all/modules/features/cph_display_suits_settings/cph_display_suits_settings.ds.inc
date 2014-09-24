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
  $ds_fieldsetting->id = 'node|aufgabe|set1';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'aufgabe';
  $ds_fieldsetting->view_mode = 'set1';
  $ds_fieldsetting->settings = array(
    'ds_ansprechpartner' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span12',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'ds_aufgabe_statusbar' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'span12',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span12',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_aufgabe_status' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span4',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_datum' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span3',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_verantwortlich' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'span4',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_aufgabe' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h4',
          'ow-cl' => 'span7',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ansprechpartner' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span5',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_bemerkung' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span6 offset1',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ansprechpartner_alt' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'span6',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_datum_beendet' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'span4',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ansprechpartner_alt2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'span-4',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|aufgabe|set1'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|firma|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'firma';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
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
  $ds_fieldsetting->id = 'node|firma|list_standard';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'firma';
  $ds_fieldsetting->view_mode = 'list_standard';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'strong',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span4',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_profil_adresse' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span4',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_branche' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'span3 pull-left',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|firma|list_standard'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|firma|set1';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'firma';
  $ds_fieldsetting->view_mode = 'set1';
  $ds_fieldsetting->settings = array(
    'firma_internet' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|firma|set1'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|firma|set2';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'firma';
  $ds_fieldsetting->view_mode = 'set2';
  $ds_fieldsetting->settings = array(
    'edit' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_stichwort' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|firma|set2'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_inhalt' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
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
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'div',
        'class' => 'span2',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'i',
          'fis-cl' => 'icon icon-chevron-right',
          'fis-at' => '',
          'fis-def-at' => FALSE,
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
  $ds_fieldsetting->id = 'node|steckbrief|set1';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'steckbrief';
  $ds_fieldsetting->view_mode = 'set1';
  $ds_fieldsetting->settings = array(
    'neu' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'strong',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'small',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_hauptap' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'small',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|steckbrief|set1'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|aufgabenart|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'aufgabenart';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'more_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|aufgabenart|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|firma_verteiler|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'firma_verteiler';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|firma_verteiler|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|inhalte|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'inhalte';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
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

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function cph_display_suits_settings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_ansprechpartner';
  $ds_field->label = 'ds-ansprechpartner';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'ds_extras|ds_ansprechpartner_block',
    'block_render' => '3',
  );
  $export['ds_ansprechpartner'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_aufgabe_statusbar';
  $ds_field->label = 'DS-Aufgabe StatusBar';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'ds_extras|statusbar',
    'block_render' => '1',
  );
  $export['ds_aufgabe_statusbar'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'firma_internet';
  $ds_field->label = 'firma_internet';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:field-verbundene-firma:field_internet]',
      'format' => 'url',
    ),
    'use_token' => 1,
  );
  $export['firma_internet'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'meta_menu_firma';
  $ds_field->label = 'Mata Menu Firma';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a  href="#aufgabe">Aufgabe</a> | 
<a  href="#ansprechpartner">Ansprechpartner</a> ',
      'format' => 'filtered_html',
    ),
    'use_token' => 0,
  );
  $export['meta_menu_firma'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'neu';
  $ds_field->label = 'neue Aufgabe';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a class="btn btn-small" type="button" href="/node/add/aufgabe?field_ansprechpartner=[node:nid]&amp;field_verantwortlich=[current-user:field-steckbrief:nid]&amp;field_kunde=[node:field-verbundene-firma:nid]">Neue Aufgabe</a> 
',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['neu'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cph_display_suits_settings_ds_layout_settings_info() {
  $export = array();

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
        0 => 'field_aufgabe',
        1 => 'field_bemerkung',
        2 => 'field_verantwortlich',
        3 => 'field_ansprechpartner_alt',
        4 => 'field_ansprechpartner_alt2',
        5 => 'field_datum',
        6 => 'field_ansprechpartner',
        7 => 'field_aufgabe_status',
        8 => 'field_datum_beendet',
        9 => 'node_link',
      ),
      'ds_hidden' => array(
        10 => 'ds_ansprechpartner',
        11 => 'ds_aufgabe_statusbar',
      ),
    ),
    'fields' => array(
      'field_aufgabe' => 'ds_content',
      'field_bemerkung' => 'ds_content',
      'field_verantwortlich' => 'ds_content',
      'field_ansprechpartner_alt' => 'ds_content',
      'field_ansprechpartner_alt2' => 'ds_content',
      'field_datum' => 'ds_content',
      'field_ansprechpartner' => 'ds_content',
      'field_aufgabe_status' => 'ds_content',
      'field_datum_beendet' => 'ds_content',
      'node_link' => 'ds_content',
      'ds_ansprechpartner' => 'ds_hidden',
      'ds_aufgabe_statusbar' => 'ds_hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'ds_content' => array(
        'well-sub' => 'well-sub',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|aufgabe|set1'] = $ds_layout;

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
        5 => 'field_beschreibung',
        6 => 'field_stichwort',
      ),
      'right' => array(
        7 => 'field_internet',
        8 => 'field_postfach',
        9 => 'field_bundesland',
        10 => 'field_adr_herkunft',
        11 => 'field_branche',
        12 => 'field_verteilerliste',
      ),
      'hidden' => array(
        13 => 'path',
        14 => 'field_titel',
        15 => 'field_kd_nr_alt',
        16 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_profil_adresse' => 'left',
      'field_telefon' => 'left',
      'field_telefax' => 'left',
      'field_e_mail' => 'left',
      'field_beschreibung' => 'left',
      'field_stichwort' => 'left',
      'field_internet' => 'right',
      'field_postfach' => 'right',
      'field_bundesland' => 'right',
      'field_adr_herkunft' => 'right',
      'field_branche' => 'right',
      'field_verteilerliste' => 'right',
      'path' => 'hidden',
      'field_titel' => 'hidden',
      'field_kd_nr_alt' => 'hidden',
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
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
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
        0 => 'field_verteilerliste',
        1 => 'field_profil_adresse',
        2 => 'title',
        3 => 'field_telefon',
        4 => 'field_telefax',
        5 => 'field_e_mail',
        6 => 'field_internet',
        7 => 'field_postfach',
        8 => 'field_adr_herkunft',
        9 => 'field_titel',
        10 => 'field_beschreibung',
        11 => 'field_kd_nr_alt',
        12 => 'field_branche',
        13 => 'field_stichwort',
      ),
    ),
    'fields' => array(
      'field_verteilerliste' => 'ds_content',
      'field_profil_adresse' => 'ds_content',
      'title' => 'ds_content',
      'field_telefon' => 'ds_content',
      'field_telefax' => 'ds_content',
      'field_e_mail' => 'ds_content',
      'field_internet' => 'ds_content',
      'field_postfach' => 'ds_content',
      'field_adr_herkunft' => 'ds_content',
      'field_titel' => 'ds_content',
      'field_beschreibung' => 'ds_content',
      'field_kd_nr_alt' => 'ds_content',
      'field_branche' => 'ds_content',
      'field_stichwort' => 'ds_content',
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
  $ds_layout->id = 'node|firma|list_standard';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'firma';
  $ds_layout->view_mode = 'list_standard';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_profil_adresse',
        2 => 'field_branche',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_profil_adresse' => 'ds_content',
      'field_branche' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(),
      'ds_content' => array(
        'pre' => 'pre',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|firma|list_standard'] = $ds_layout;

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
        0 => 'field_profil_adresse',
        1 => 'field_telefon',
        2 => 'field_telefax',
        3 => 'field_e_mail',
        4 => 'field_internet',
        5 => 'firma_internet',
      ),
      'ds_hidden' => array(
        6 => 'title',
      ),
    ),
    'fields' => array(
      'field_profil_adresse' => 'ds_content',
      'field_telefon' => 'ds_content',
      'field_telefax' => 'ds_content',
      'field_e_mail' => 'ds_content',
      'field_internet' => 'ds_content',
      'firma_internet' => 'ds_content',
      'title' => 'ds_hidden',
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
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
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
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_branche',
        1 => 'field_verteilerliste',
        2 => 'field_stichwort',
        3 => 'field_beschreibung',
      ),
    ),
    'fields' => array(
      'field_branche' => 'ds_content',
      'field_verteilerliste' => 'ds_content',
      'field_stichwort' => 'ds_content',
      'field_beschreibung' => 'ds_content',
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
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|firma|set2'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|kalender|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'kalender';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_termin',
        1 => 'title',
        2 => 'body',
      ),
      'ds_hidden' => array(
        3 => 'path',
      ),
      'hidden' => array(
        4 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_termin' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'path' => 'ds_hidden',
      '_add_existing_field' => 'hidden',
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
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|kalender|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_inhalt',
        1 => 'field_bild',
        2 => 'body',
        3 => 'field_dokument',
        4 => 'post_date',
        5 => 'author',
        6 => 'field_verbundene_firma',
      ),
    ),
    'fields' => array(
      'field_inhalt' => 'ds_content',
      'field_bild' => 'ds_content',
      'body' => 'ds_content',
      'field_dokument' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
      'field_verbundene_firma' => 'ds_content',
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
  $export['node|page|default'] = $ds_layout;

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
        3 => 'field_dokument',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'middle',
      'field_bild' => 'middle',
      'body' => 'middle',
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
  $ds_layout->id = 'node|steckbrief|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'steckbrief';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_hauptap',
        1 => 'title',
        2 => 'path',
        3 => 'field_titel',
        4 => 'field_anrede',
        5 => 'field_briefanrede',
        6 => 'field_firstname',
        7 => 'field_surename',
        8 => 'field_verbundene_firma',
        9 => 'field_department',
        10 => 'field_funktion',
        11 => 'field_telefon',
        12 => 'field_privat_telefon',
        13 => 'field_tel_mobil',
        14 => 'field_telefax',
        15 => 'field_e_mail',
        16 => 'field_geburtstag',
        17 => 'field_hobbies',
        18 => 'field_praesent',
        19 => 'field_bemerkung',
        20 => 'field_verteiler',
      ),
      'right' => array(
        21 => 'field_sprachen_tax',
        22 => 'field_adresse_privat',
      ),
      'hidden' => array(
        23 => 'field_sprachen',
        24 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_hauptap' => 'left',
      'title' => 'left',
      'path' => 'left',
      'field_titel' => 'left',
      'field_anrede' => 'left',
      'field_briefanrede' => 'left',
      'field_firstname' => 'left',
      'field_surename' => 'left',
      'field_verbundene_firma' => 'left',
      'field_department' => 'left',
      'field_funktion' => 'left',
      'field_telefon' => 'left',
      'field_privat_telefon' => 'left',
      'field_tel_mobil' => 'left',
      'field_telefax' => 'left',
      'field_e_mail' => 'left',
      'field_geburtstag' => 'left',
      'field_hobbies' => 'left',
      'field_praesent' => 'left',
      'field_bemerkung' => 'left',
      'field_verteiler' => 'left',
      'field_sprachen_tax' => 'right',
      'field_adresse_privat' => 'right',
      'field_sprachen' => 'hidden',
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
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|steckbrief|form'] = $ds_layout;

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
        0 => 'title',
        1 => 'field_funktion',
        2 => 'field_hauptap',
        3 => 'field_telefon',
        4 => 'field_e_mail',
        5 => 'node_link',
        6 => 'neu',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_funktion' => 'ds_content',
      'field_hauptap' => 'ds_content',
      'field_telefon' => 'ds_content',
      'field_e_mail' => 'ds_content',
      'node_link' => 'ds_content',
      'neu' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'container' => 'container',
        'span4' => 'span4',
      ),
      'ds_content' => array(
        'row' => 'row',
        'span4' => 'span4',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|steckbrief|set1'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|steckbrief|set2';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'steckbrief';
  $ds_layout->view_mode = 'set2';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_department',
        1 => 'field_telefon',
        2 => 'field_e_mail',
        3 => 'field_tel_mobil',
        4 => 'field_privat_telefon',
        5 => 'field_telefax',
      ),
    ),
    'fields' => array(
      'field_department' => 'ds_content',
      'field_telefon' => 'ds_content',
      'field_e_mail' => 'ds_content',
      'field_tel_mobil' => 'ds_content',
      'field_privat_telefon' => 'ds_content',
      'field_telefax' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|steckbrief|set2'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|steckbrief|set3';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'steckbrief';
  $ds_layout->view_mode = 'set3';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_verteiler',
        1 => 'field_hobbies',
        2 => 'field_praesent',
        3 => 'field_bemerkung',
        4 => 'field_geburtstag',
      ),
    ),
    'fields' => array(
      'field_verteiler' => 'ds_content',
      'field_hobbies' => 'ds_content',
      'field_praesent' => 'ds_content',
      'field_bemerkung' => 'ds_content',
      'field_geburtstag' => 'ds_content',
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
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|steckbrief|set3'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|inhalte|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'inhalte';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
      ),
      'ds_hidden' => array(
        1 => 'title',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
      'title' => 'ds_hidden',
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
    'hide_sidebars' => 0,
  );
  $export['taxonomy_term|inhalte|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function cph_display_suits_settings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'list_standard';
  $ds_view_mode->label = 'List-Standard';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['list_standard'] = $ds_view_mode;

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
