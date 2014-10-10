<?php

/**
 * @file
 * template.php
 */

function bootstrap_subtheme_preprocess_html(&$vars) {
  foreach($vars['user']->roles as $role){
    $vars['classes_array'][] = 'type-' . drupal_html_class($role);
  }
}

?>