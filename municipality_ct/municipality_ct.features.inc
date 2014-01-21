<?php
/**
 * @file
 * municipality_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function municipality_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function municipality_ct_image_default_styles() {
  $styles = array();

  // Exported image style: half_screen.
  $styles['half_screen'] = array(
    'name' => 'half_screen',
    'label' => 'Half screen (640x480)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slides.
  $styles['slides'] = array(
    'name' => 'slides',
    'label' => 'Slides (480x320)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function municipality_ct_node_info() {
  $items = array(
    'committees' => array(
      'name' => t('Nefndir'),
      'base' => 'node_content',
      'description' => t('Nefndir settar af sveitastjórn.'),
      'has_title' => '1',
      'title_label' => t('Heiti'),
      'help' => '',
    ),
    'place' => array(
      'name' => t('Staðir'),
      'base' => 'node_content',
      'description' => t('Staðir sem hafa staðsetningu, tengiliði, síma, netfang og aðrar upplýsingar.'),
      'has_title' => '1',
      'title_label' => t('Titill'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Færsla'),
      'base' => 'node_content',
      'description' => t('Færslur geta verið fjölbreytilegar. Áður en þú byrjar að skrifa skaltu líta á flokkana og velja viðeigandi flokk fyrir textann.'),
      'has_title' => '1',
      'title_label' => t('Titill'),
      'help' => t('Athugaðu að velja þarf flokk fyrir færsluna.'),
    ),
    'reports' => array(
      'name' => t('Fundargerðir'),
      'base' => 'node_content',
      'description' => t('Fundargerðir frá nefndum.'),
      'has_title' => '1',
      'title_label' => t('Titill'),
      'help' => '',
    ),
    'staff' => array(
      'name' => t('Starfsmaður'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nafn'),
      'help' => '',
    ),
  );
  return $items;
}
