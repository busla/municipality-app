<?php
/**
 * @file
 * municipality_ct.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function municipality_ct_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'committee_members';
  $relation_type->label = 'Nefndarmenn';
  $relation_type->reverse_label = 'Nefnd';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:committees',
  );
  $relation_type->target_bundles = array(
    0 => 'node:staff',
  );
  $export['committee_members'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'reports';
  $relation_type->label = 'Fundargerðir';
  $relation_type->reverse_label = 'Fundargerðir';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:reports',
  );
  $relation_type->target_bundles = array(
    0 => 'node:committees',
  );
  $export['reports'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'staff';
  $relation_type->label = 'Starfsmenn';
  $relation_type->reverse_label = 'Staður';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:place',
  );
  $relation_type->target_bundles = array(
    0 => 'node:staff',
  );
  $export['staff'] = $relation_type;

  return $export;
}
