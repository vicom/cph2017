<?php
/**
 * @file
 * menu_cph_funktion.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_cph_funktion_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-cph-funktionen:admin/config/people/taxonomy_access
  $menu_links['menu-cph-funktionen:admin/config/people/taxonomy_access'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'admin/config/people/taxonomy_access',
    'router_path' => 'admin/config/people/taxonomy_access',
    'link_title' => 'Taxonomy Access Controll',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-cph-funktionen:admin/lists/user-liste
  $menu_links['menu-cph-funktionen:admin/lists/user-liste'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'admin/lists/user-liste',
    'router_path' => 'admin/lists/user-liste',
    'link_title' => 'Liste der Benutzer',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-cph-funktionen:admin/people/create
  $menu_links['menu-cph-funktionen:admin/people/create'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Benutzer +',
    'options' => array(
      'attributes' => array(
        'title' => 'neuen Benutzer anlegen',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-cph-funktionen:admin/structure/menu/manage/main-menu
  $menu_links['menu-cph-funktionen:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Menü bearbeiten',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-cph-funktionen:admin/structure/taxonomy/aufgabenart
  $menu_links['menu-cph-funktionen:admin/structure/taxonomy/aufgabenart'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'admin/structure/taxonomy/aufgabenart',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Aufgabenart bearbeiten',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
  );
  // Exported menu link: menu-cph-funktionen:admin/structure/taxonomy/firma_verteiler
  $menu_links['menu-cph-funktionen:admin/structure/taxonomy/firma_verteiler'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'admin/structure/taxonomy/firma_verteiler',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Verteilerlisten',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-cph-funktionen:admin/structure/taxonomy/inhalte
  $menu_links['menu-cph-funktionen:admin/structure/taxonomy/inhalte'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'admin/structure/taxonomy/inhalte',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Kategorien bearbeiten',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-cph-funktionen:admin/workbench
  $menu_links['menu-cph-funktionen:admin/workbench'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin',
    'link_title' => 'Mein Arbeitsbereich',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-cph-funktionen:aufgabe
  $menu_links['menu-cph-funktionen:aufgabe'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'aufgabe',
    'router_path' => 'aufgabe',
    'link_title' => 'Test - Aufgaben nach Aufgabenart',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
  );
  // Exported menu link: menu-cph-funktionen:aufgaben-alle
  $menu_links['menu-cph-funktionen:aufgaben-alle'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'aufgaben-alle',
    'router_path' => 'aufgaben-alle',
    'link_title' => 'Test - Alle aufgaben',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
  );
  // Exported menu link: menu-cph-funktionen:content/profil
  $menu_links['menu-cph-funktionen:content/profil'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'content/profil',
    'router_path' => 'content/profil',
    'link_title' => 'Ansprechpartner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Exported menu link: menu-cph-funktionen:kalender
  $menu_links['menu-cph-funktionen:kalender'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'kalender',
    'router_path' => 'kalender',
    'link_title' => 'Kalender',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
  );
  // Exported menu link: menu-cph-funktionen:node/add/firma
  $menu_links['menu-cph-funktionen:node/add/firma'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'node/add/firma',
    'router_path' => 'node/add/firma',
    'link_title' => 'neue Firma',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-cph-funktionen:node/add/page
  $menu_links['menu-cph-funktionen:node/add/page'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'neue Intranet-Seite',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-cph-funktionen:node/add/schaufenster
  $menu_links['menu-cph-funktionen:node/add/schaufenster'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'node/add/schaufenster',
    'router_path' => 'node/add/schaufenster',
    'link_title' => 'Schaufenster +',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-cph-funktionen:node/add/steckbrief
  $menu_links['menu-cph-funktionen:node/add/steckbrief'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'node/add/steckbrief',
    'router_path' => 'node/add/steckbrief',
    'link_title' => 'Steckbrief +',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-cph-funktionen:reports/aufgabenliste
  $menu_links['menu-cph-funktionen:reports/aufgabenliste'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'reports/aufgabenliste',
    'router_path' => 'reports/aufgabenliste',
    'link_title' => 'Report Aufgaben',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
  );
  // Exported menu link: menu-cph-funktionen:sprachen
  $menu_links['menu-cph-funktionen:sprachen'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'sprachen',
    'router_path' => 'sprachen',
    'link_title' => 'Tools - Sprachen',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-33',
  );
  // Exported menu link: menu-cph-funktionen:tool_steckbrief-ohne-firma
  $menu_links['menu-cph-funktionen:tool_steckbrief-ohne-firma'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'tool_steckbrief-ohne-firma',
    'router_path' => 'tool_steckbrief-ohne-firma',
    'link_title' => 'tool - Steckbrief ohne Firma',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-32',
  );
  // Exported menu link: menu-cph-funktionen:user/logout
  $menu_links['menu-cph-funktionen:user/logout'] = array(
    'menu_name' => 'menu-cph-funktionen',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-36',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ansprechpartner');
  t('Aufgabenart bearbeiten');
  t('Benutzer +');
  t('Kalender');
  t('Kategorien bearbeiten');
  t('Liste der Benutzer');
  t('Logout');
  t('Mein Arbeitsbereich');
  t('Menü bearbeiten');
  t('Report Aufgaben');
  t('Schaufenster +');
  t('Steckbrief +');
  t('Taxonomy Access Controll');
  t('Test - Alle aufgaben');
  t('Test - Aufgaben nach Aufgabenart');
  t('Tools - Sprachen');
  t('Verteilerlisten');
  t('neue Firma');
  t('neue Intranet-Seite');
  t('tool - Steckbrief ohne Firma');


  return $menu_links;
}
