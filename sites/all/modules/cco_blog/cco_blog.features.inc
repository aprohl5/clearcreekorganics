<?php
/**
 * @file
 * cco_blog.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cco_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cco_blog_node_info() {
  $items = array(
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('Upload new recipes for CCO users'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('You need ingredients, a photo, and instructions.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
