<?php
/**
 * @file
 * municipality_views.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function municipality_views_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'hafa samband';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'contact_us';
  $fe_block_boxes->body = ' Senda póst

486-6100

486-6120';

  $export['contact_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Staðsetning';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'office_location';
  $fe_block_boxes->body = 'Skeiða- og Gnúpverjahreppur

Árnes, 801 Selfoss

Kt. 540602-4410';

  $export['office_location'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Opnunartími';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'opening_hours';
  $fe_block_boxes->body = 'Mán - fim: 09:00 – 12:00 og 13:00 - 15:00

Föstudaga: 09:00 - 12:00';

  $export['opening_hours'] = $fe_block_boxes;

  return $export;
}
