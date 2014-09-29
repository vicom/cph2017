<?php
/**
 * @file
 * node_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function node_type_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Benutzen Sie <em>Artikel</em> für zeitkritische Inhalte wie Nachrichten, Pressemeldungen oder Blogeinträge.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
    'kalender' => array(
      'name' => t('Kalender'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Einfache Seite'),
      'base' => 'node_content',
      'description' => t('Benutzen Sie <em>Einfache Seiten</em> für statischen Inhalt, wie z.B. eine „Über uns“ Seite.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'schaufenster' => array(
      'name' => t('Schaufenster'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
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
  return $items;
}
