const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t end_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_HOME, KC_END);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    &end_key_override,
    NULL // Null terminate the array of overrides!
};
