<?php
/**
 * @file
 * municipality_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function municipality_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fb_social" && $api == "fb_social") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function municipality_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
