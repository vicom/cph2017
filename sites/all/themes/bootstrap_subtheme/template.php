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
 // add responsive image to img
function bootstrap_subtheme_preprocess_image_style(&$vars) {
$vars['attributes']['class'][] = 'img-responsive'; // http://getbootstrap.com/css/#overview-responsive-images
}
function bootstrap_subtheme_preprocess_page(&$vars) {
 if (isset($vars['node'])) {
$vars['theme_hook_suggestion'] = 'page__'.$vars['node']->type; 
}
}

function bootstrap_subtheme_date_combo($variables) {
  return theme('form_element', $variables);
}
?>