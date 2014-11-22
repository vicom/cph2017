<?php
/**
 * @file
 * cphcontype_hoteliers.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cphcontype_hoteliers_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_steckbrief',
        1 => 'summary',
        2 => 'masquerade',
      ),
    ),
    'fields' => array(
      'field_steckbrief' => 'ds_content',
      'summary' => 'ds_content',
      'masquerade' => 'ds_content',
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
    'hide_sidebars' => 0,
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}
