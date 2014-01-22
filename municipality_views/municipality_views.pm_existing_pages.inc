<?php
/**
 * @file
 * municipality_views.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function municipality_views_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'files';
  $pm_existing_page->label = 'File';
  $pm_existing_page->context = 'entity|file|fid';
  $pm_existing_page->paths = 'file/%file';
  $export['files'] = $pm_existing_page;

  return $export;
}
