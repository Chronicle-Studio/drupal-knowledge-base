<?php
/**
 * @file
 * chronicle_knowledge_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function chronicle_knowledge_base_taxonomy_default_vocabularies() {
  return array(
    'knowledge_base_categories' => array(
      'name' => 'Knowledge Base categories',
      'machine_name' => 'knowledge_base_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
