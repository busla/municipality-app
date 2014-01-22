<?php
/**
 * @file
 * municipality_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function municipality_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-contact_us'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'contact_us',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'skeidgnup_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'skeidgnup_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Hafa samband',
    'visibility' => 0,
  );

  $export['block-office_location'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'office_location',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'skeidgnup_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'skeidgnup_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Staðsetning',
    'visibility' => 0,
  );

  $export['block-opening_hours'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'opening_hours',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'skeidgnup_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'skeidgnup_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Opnunartími',
    'visibility' => 0,
  );

  $export['poll-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'poll',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'skeidgnup_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeidgnup_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'skeidgnup_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'skeidgnup_theme',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['social_media_links-social-media-links'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'social-media-links',
    'module' => 'social_media_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'skeidgnup_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'skeidgnup_theme',
        'weight' => -16,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'skeidgnup_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeidgnup_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'skeidgnup_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'skeidgnup_theme',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'skeidgnup_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeidgnup_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-uploaded_files-block_1'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'uploaded_files-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'skeidgnup_theme' => array(
        'region' => 'slideshow',
        'status' => 1,
        'theme' => 'skeidgnup_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
