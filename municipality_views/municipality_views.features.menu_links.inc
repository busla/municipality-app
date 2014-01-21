<?php
/**
 * @file
 * municipality_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function municipality_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-manager_vinnubekkur:admin/workbench
  $menu_links['menu-manager_vinnubekkur:admin/workbench'] = array(
    'menu_name' => 'menu-manager',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'Vinnubekkur',
    'options' => array(
      'attributes' => array(
        'title' => 'Yfirlit yfir allt efni.',
      ),
      'identifier' => 'menu-manager_vinnubekkur:admin/workbench',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Vinnubekkur');


  return $menu_links;
}
