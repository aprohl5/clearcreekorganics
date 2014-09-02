<?php
/**
 * @file
 * cco_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cco_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_layer|node|recipe|default';
  $field_group->group_name = 'group_top_layer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'top layer',
    'weight' => '3',
    'children' => array(
      0 => 'field_image',
      1 => 'field_ingredients',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'top layer',
      'instance_settings' => array(
        'classes' => 'group-top-layer field-group-div clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_recipe_full_group_top_layer',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_top_layer|node|recipe|default'] = $field_group;

  return $export;
}
