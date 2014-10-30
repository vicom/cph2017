<?php
/**
 * @file
 * cph_image.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function cph_image_image_default_styles() {
  $styles = array();

  // Exported image style: home_carousel.
  $styles['home_carousel'] = array(
    'name' => 'home_carousel',
    'label' => 'Home Carousel',
    'effects' => array(
      1 => array(
        'label' => 'Skalieren und zuschneiden',
        'help' => 'Skalieren und zuschneiden wird das Seitenverhältnis des ursprünglichen Bildes erhalten, und dann die überstehenden Ränder entfernen. Dies ist besonders nützlich für die Erstellung von perfekt quadratischen Vorschaubildern ohne Verzerrung des Bildes.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 220,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
