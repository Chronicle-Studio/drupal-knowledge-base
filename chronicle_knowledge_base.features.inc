<?php
/**
 * @file
 * chronicle_knowledge_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function chronicle_knowledge_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function chronicle_knowledge_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function chronicle_knowledge_base_node_info() {
  $items = array(
    'knowledge_base_article' => array(
      'name' => t('Knowledge Base Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function chronicle_knowledge_base_weight_features_default_settings() {
  $settings = array();

  $settings['knowledge_base_article'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
