<?php
/**
 * @file
 * cph_contype_cms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cph_contype_cms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cph_contype_cms_node_info() {
  $items = array(
    'aufgabe' => array(
      'name' => t('Aufgabe'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'firma' => array(
      'name' => t('Firma'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'steckbrief' => array(
      'name' => t('Steckbrief'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
