<?php
/**
 * @file
 * cph_display_suits_settings.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function cph_display_suits_settings_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'steckbrief-block';
  $ds_vd->label = 'Steckbrief: Firmen Block (Views template)';
  $export['steckbrief-block'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'steckbrief-page_1';
  $ds_vd->label = 'Steckbrief: Profile - alle (Views template)';
  $export['steckbrief-page_1'] = $ds_vd;

  return $export;
}
