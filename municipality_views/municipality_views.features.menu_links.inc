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

  // Exported menu link: menu-manager_frsla:node/add/post
  $menu_links['menu-manager_frsla:node/add/post'] = array(
    'menu_name' => 'menu-manager',
    'link_path' => 'node/add/post',
    'router_path' => 'node/add/post',
    'link_title' => 'Færsla',
    'options' => array(
      'attributes' => array(
        'title' => 'Setja inn frétt eða síðu.',
      ),
      'identifier' => 'menu-manager_frsla:node/add/post',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-manager_vinnubekkur:admin/workbench',
  );
  // Exported menu link: menu-manager_fundarger:node/add/report
  $menu_links['menu-manager_fundarger:node/add/report'] = array(
    'menu_name' => 'menu-manager',
    'link_path' => 'node/add/report',
    'router_path' => 'node/add',
    'link_title' => 'Fundargerð',
    'options' => array(
      'attributes' => array(
        'title' => 'Setja inn fundargerð',
      ),
      'identifier' => 'menu-manager_fundarger:node/add/report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-manager_vinnubekkur:admin/workbench',
  );
  // Exported menu link: menu-manager_knnun:node/add/poll
  $menu_links['menu-manager_knnun:node/add/poll'] = array(
    'menu_name' => 'menu-manager',
    'link_path' => 'node/add/poll',
    'router_path' => 'node/add/poll',
    'link_title' => 'Könnun',
    'options' => array(
      'attributes' => array(
        'title' => 'Setja inn könnun.',
      ),
      'identifier' => 'menu-manager_knnun:node/add/poll',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-manager_vinnubekkur:admin/workbench',
  );
  // Exported menu link: menu-manager_nefnd:node/add/committees
  $menu_links['menu-manager_nefnd:node/add/committees'] = array(
    'menu_name' => 'menu-manager',
    'link_path' => 'node/add/committees',
    'router_path' => 'node/add/committees',
    'link_title' => 'Nefnd',
    'options' => array(
      'attributes' => array(
        'title' => 'Setja inn nefnd eða sveitastjórn.',
      ),
      'identifier' => 'menu-manager_nefnd:node/add/committees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-manager_vinnubekkur:admin/workbench',
  );
  // Exported menu link: menu-manager_skr:admin/content/file
  $menu_links['menu-manager_skr:admin/content/file'] = array(
    'menu_name' => 'menu-manager',
    'link_path' => 'admin/content/file',
    'router_path' => 'admin/content/file',
    'link_title' => 'Skrá',
    'options' => array(
      'attributes' => array(
        'title' => 'Setja inn skjöl eða myndir.',
      ),
      'identifier' => 'menu-manager_skr:admin/content/file',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-manager_vinnubekkur:admin/workbench',
  );
  // Exported menu link: menu-manager_starfsmaur:node/add/staff
  $menu_links['menu-manager_starfsmaur:node/add/staff'] = array(
    'menu_name' => 'menu-manager',
    'link_path' => 'node/add/staff',
    'router_path' => 'node/add/staff',
    'link_title' => 'Starfsmaður',
    'options' => array(
      'attributes' => array(
        'title' => 'Setja inn starfsmann.',
      ),
      'identifier' => 'menu-manager_starfsmaur:node/add/staff',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-manager_vinnubekkur:admin/workbench',
  );
  // Exported menu link: menu-manager_staur:node/add/place
  $menu_links['menu-manager_staur:node/add/place'] = array(
    'menu_name' => 'menu-manager',
    'link_path' => 'node/add/place',
    'router_path' => 'node/add/place',
    'link_title' => 'Staður',
    'options' => array(
      'attributes' => array(
        'title' => 'Setja inn stað með möguleika á að velja staðsetningu á korti.',
      ),
      'identifier' => 'menu-manager_staur:node/add/place',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-manager_vinnubekkur:admin/workbench',
  );
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
  t('Fundargerð');
  t('Færsla');
  t('Könnun');
  t('Nefnd');
  t('Skrá');
  t('Starfsmaður');
  t('Staður');
  t('Vinnubekkur');


  return $menu_links;
}
