<?php
/**
 * @file
 * cph_contype_cms.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cph_contype_cms_taxonomy_default_vocabularies() {
  return array(
    'aufgabenart' => array(
      'name' => 'Aufgabenart',
      'machine_name' => 'aufgabenart',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'aufgabestatus' => array(
      'name' => 'Aufgabestatus',
      'machine_name' => 'aufgabestatus',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'branche' => array(
      'name' => 'Branche',
      'machine_name' => 'branche',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'firma_stichwort' => array(
      'name' => 'Firma-Stichwort',
      'machine_name' => 'firma_stichwort',
      'description' => 'Stichwort zu Firmenaktionen',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'firma_verteiler' => array(
      'name' => 'Firma-Verteiler',
      'machine_name' => 'firma_verteiler',
      'description' => 'Firma-Verteiler',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'language' => array(
      'name' => 'Language',
      'machine_name' => 'language',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
