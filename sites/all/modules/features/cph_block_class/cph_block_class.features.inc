<?php
/**
 * @file
 * cph_block_class.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function cph_block_class_block_class_features_default_class() {
  return array(
    'block:1' => array(
      'module' => 'block',
      'delta' => '1',
      'css_classes' => 'links inline clearfix main-menu',
    ),
    'masquerade:masquerade' => array(
      'module' => 'masquerade',
      'delta' => 'masquerade',
      'css_classes' => 'hidden-xs hidden-sm',
    ),
    'menu_block:1' => array(
      'module' => 'menu_block',
      'delta' => '1',
      'css_classes' => 'links inline clearfix main-menu',
    ),
    'menu_block:2' => array(
      'module' => 'menu_block',
      'delta' => '2',
      'css_classes' => 'links main-menu',
    ),
    'menu_block:3' => array(
      'module' => 'menu_block',
      'delta' => '3',
      'css_classes' => 'links main-menu hidden-xs hidden-sm small',
    ),
    'multiblock:1' => array(
      'module' => 'multiblock',
      'delta' => '1',
      'css_classes' => 'visible-xs visible-sm',
    ),
    'user:online' => array(
      'module' => 'user',
      'delta' => 'online',
      'css_classes' => 'hidden-xs hidden-sm',
    ),
  );
}
