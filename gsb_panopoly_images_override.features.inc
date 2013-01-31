<?php
/**
 * @file
 * gsb_panopoly_images_override.features.inc
 */

/**
 * Implements hook_file_default_displays_alter().
 */
function gsb_panopoly_images_override_file_default_displays_alter(&$data) {
  if (isset($data['image__default__file_image'])) {
    $data['image__default__file_image']->settings['alt'] = '[file:field_file_image_alt_text]'; /* WAS: '' */
    $data['image__default__file_image']->settings['image_style'] = 'gsb_image_large'; /* WAS: '' */
    $data['image__default__file_image']->settings['title'] = '[file:field_file_image_title_text]'; /* WAS: '' */
  }
  if (isset($data['image__preview__file_image'])) {
    $data['image__preview__file_image']->settings['alt'] = '[file:field_file_image_alt_text]'; /* WAS: '' */
    $data['image__preview__file_image']->settings['image_style'] = 'gsb_image_small'; /* WAS: 'panopoly_image_thumbnail' */
    $data['image__preview__file_image']->settings['title'] = '[file:field_file_image_title_text]'; /* WAS: '' */
  }
}
