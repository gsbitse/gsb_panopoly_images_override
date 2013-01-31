<?php
/**
 * @file
 * gsb_panopoly_images_override.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function gsb_panopoly_images_override_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: file_display
  $overrides["file_display.image__default__file_image.settings|alt"] = '[file:field_file_image_alt_text]';
  $overrides["file_display.image__default__file_image.settings|image_style"] = 'gsb_image_large';
  $overrides["file_display.image__default__file_image.settings|title"] = '[file:field_file_image_title_text]';
  $overrides["file_display.image__preview__file_image.settings|alt"] = '[file:field_file_image_alt_text]';
  $overrides["file_display.image__preview__file_image.settings|image_style"] = 'gsb_image_small';
  $overrides["file_display.image__preview__file_image.settings|title"] = '[file:field_file_image_title_text]';

 return $overrides;
}
