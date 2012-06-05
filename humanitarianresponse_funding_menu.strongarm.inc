<?php
/**
 * @file
 * humanitarianresponse_funding_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_funding_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_funding';
  $strongarm->value = 'main-menu';
  $export['taxonomy_menu_vocab_menu_funding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_funding';
  $strongarm->value = 'main-menu:funding';
  $export['taxonomy_menu_vocab_parent_funding'] = $strongarm;

  return $export;
}
