<?php
/**
 * @file
 * Default template for knowledge base category item list.
 *
 * Available variables:
 * - $article_list: The rendered article list.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions.
 * - $count: The total count of node pages associated with the current term.
 * - $items: The items array to passed into theme_item_list().
 * - $limit: The limit of how many items to display for each category list.
 * - $term: The loaded term object.
 * - $term_url: The url of the term page.
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *
 * @see template_preprocess()
 * @see template_preprocess_chronicle_knowledge_base_list()
 */
?>

<div class="<?php print $classes; ?>">

  <h2><a href="<?php print $term_url; ?>"><?php print $term->name; ?></a></h2>
  <div class="topic-details">
    <span class="article-count"><?php print format_plural($count, '1 Article', '@count Articles'); ?></span>
  </div>

  <div class="articles">
    <?php print $article_list; ?>
  </div>

  <?php if ($count > $limit): ?>
    <a href="<?php print $term_url; ?>" class="view-more" rel="nofollow">View all articles</a>
  <?php endif; ?>

</div>
