<?php
/**
 * @file
 * cph_display_suits_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cph_display_suits_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
}
