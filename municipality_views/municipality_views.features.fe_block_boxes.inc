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
  $fe_block_boxes->body = '<p>Mán - fim: 09:00 – 12:00 og 13:00 - 15:00</p>

<p>Föstudaga: 09:00 - 12:00</p>
';

  $export['opening_hours'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Texti með helstu upplýsingum um hreppinn og birtist á forsíðu.';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'velkominn';
  $fe_block_boxes->body = '<div>
<p>Hreppurinn liggur austast&nbsp; í Árnessýslu, ofanverðri, með Hofsjökul í norðri, Flóa í suðri, Þjórsá í austri og Stóru-Laxá og Hvítá í vestri. &nbsp; Íbúar&nbsp;voru&nbsp;531 1.&nbsp;janúar&nbsp;2014.&nbsp;Atvinnu-vegir eru landbúnaður, menntunar- og uppeldisstörf auk&nbsp;iðn- og verslunarstarfa. Ferðaþjónusta fer vaxandi. Náttúrufegurð er mikil,&nbsp;félagslíf og mannlíf er blómlegt.&nbsp;&nbsp;Skrifstofan&nbsp;í Árnesi er&nbsp;opin &nbsp;mánud-fimmtud kl.&nbsp;9-12 og&nbsp;13-15.&nbsp; Einnig föstud 9-12</p>
</div>
';

  $export['velkominn'] = $fe_block_boxes;

  return $export;
}
