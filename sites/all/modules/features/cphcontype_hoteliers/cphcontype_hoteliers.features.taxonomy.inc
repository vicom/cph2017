<?php
/**
 * @file
 * cphcontype_hoteliers.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cphcontype_hoteliers_taxonomy_default_vocabularies() {
  return array(
    'inhalte' => array(
      'name' => 'Inhalte',
      'machine_name' => 'inhalte',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Mit Schlagwörtern können Artikel zu verwandten Themen in Kategorien zusammengefasst werden.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
