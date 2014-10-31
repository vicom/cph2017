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
function bootstrap_subtheme_preprocess_image_style(&$vars)
{
    $vars['attributes']['class'][] = 'img-responsive';
    // http://getbootstrap.com/css/#overview-responsive-images
}


?>