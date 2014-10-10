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

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Hauptmenü',
    'description' => 'Das <em>Hauptmenü</em> wird oft benutzt, um die Hauptbereiche der Website anzuzeigen, häufig in einer Top-Navigationsleiste.',
  );
  // Exported menu: menu-cph-funktionen.
  $menus['menu-cph-funktionen'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'title' => 'CPH Funktionen',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CPH Funktionen');
  t('Das <em>Hauptmenü</em> wird oft benutzt, um die Hauptbereiche der Website anzuzeigen, häufig in einer Top-Navigationsleiste.');
  t('Hauptmenü');


  return $menus;
}
