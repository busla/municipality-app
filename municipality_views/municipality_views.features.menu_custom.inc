<?php
/**
 * @file
 * municipality_views.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function municipality_views_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-manager.
  $menus['menu-manager'] = array(
    'menu_name' => 'menu-manager',
    'title' => 'Manager',
    'description' => 'Links for content managers.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links for content managers.');
  t('Manager');


  return $menus;
}
