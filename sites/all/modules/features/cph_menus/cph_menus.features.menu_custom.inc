<?php
/**
 * @file
 * cph_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cph_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-cph-funktionen.
  $menus['menu-cph-funktionen'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'title' => 'CPH Funktionen',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CPH Funktionen');


  return $menus;
}
