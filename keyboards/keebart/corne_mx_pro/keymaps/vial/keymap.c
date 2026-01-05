#include QMK_KEYBOARD_H


#ifdef LAYOUT_split_3x6_3_ex2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.
        //,--------------------------------------------------------------.
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LCTL, KC_RCTL, KC_Y, KC_U,
        KC_I, KC_O, KC_P, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LALT, KC_RALT, KC_H, KC_J,
        KC_K, KC_L, KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------+--------'
        //`--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
        KC_SLSH, KC_ESC,
        //|--------+--------+--------+--------+--------+--------+--------.
        //,--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, TL_LOWR, KC_SPC, KC_ENT, TL_UPPR, KC_RGUI
        //`--------------------------'  `--------------------------'

        ),

    [1] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.
        //,--------------------------------------------------------------.
        KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LCTL, KC_RCTL, KC_6, KC_7,
        KC_8, KC_9, KC_0, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT, KC_RALT,
        KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------'
        //`--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------.
        //,--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RGUI
        //`--------------------------'  `--------------------------'
        ),

    [2] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.
        //,--------------------------------------------------------------.
        KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_LCTL, KC_RCTL,
        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT, KC_RALT,
        KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        //|--------+--------+--------+--------+--------+--------+--------'
        //`--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS,
        KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
        //|--------+--------+--------+--------+--------+--------+--------.
        //,--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RGUI
        //`--------------------------'  `--------------------------'
        ),

    [3] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.
        //,--------------------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------'
        //`--------+--------+--------+--------+--------+--------+--------|
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------.
        //,--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RGUI
        //`--------------------------'  `--------------------------'
        )};
#else
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,
        KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
        KC_SLSH, KC_ESC,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, TL_LOWR, KC_SPC, KC_ENT, TL_UPPR, KC_RALT
        //`--------------------------'  `--------------------------'

        ),

    [1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,
        KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
        //`--------------------------'  `--------------------------'
        ),

    [2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR,
        KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL,
        KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS,
        KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
        //`--------------------------'  `--------------------------'
        ),

    [3] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
        //`--------------------------'  `--------------------------'
        )};
#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =
        {
            ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
        },
    [1] =
        {
            ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
        },
    [2] =
        {
            ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
        },
    [3] =
        {
            ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
        },
};
#endif







bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

  const uint8_t BOTTOM_LEDS[] = {0, 7, 8, 23, 30, 31};
  const uint8_t KLAMMERN_NORMAL[] = {4,11};
  const uint8_t KLAMMERN_GESCHWEIFT[] = {14, 15};
  const uint8_t KLAMMERN_ECKIG[] = {13, 16};
  const uint8_t GROESSER_KLEINER[] = {6, 9};
  const uint8_t ZAHLEN [] = {27,28,29,32,33,34,35,36,37};
  const uint8_t CAPS_LOCK [] = {21, 22, 44, 45};
  const uint8_t F_TASTEN [] = {3,4,5,6,9,10,11,12,13,14};
  const uint8_t ZOOM [] = {1,2};
  const uint8_t STEUERUNG [] = {28,32,33,34,35,36};

  //const uint8_t TEST [] = {38,39};

  void set_layer_leds(const uint8_t *led_array, uint8_t length, uint8_t redvalue, uint8_t greenvalue, uint8_t bluevalue) {
    for (uint8_t i=0; i < length; i++) {
      if (is_keyboard_left() && led_array[i] <= 22)
        rgb_matrix_set_color((led_array[i]), redvalue, greenvalue, bluevalue);
      if (!is_keyboard_left() && led_array[i] > 22)
        rgb_matrix_set_color((led_array[i]-23), redvalue, greenvalue, bluevalue);
    }
  };

  if (host_keyboard_led_state().caps_lock) set_layer_leds(CAPS_LOCK,ARRAY_SIZE(CAPS_LOCK),RGB_WHITE);
  switch(get_highest_layer(layer_state)){  // special handling per layer
    case 0: {
      set_layer_leds(BOTTOM_LEDS,ARRAY_SIZE(BOTTOM_LEDS),RGB_CYAN);
      break;
    }
    case 1: {
      set_layer_leds(BOTTOM_LEDS,ARRAY_SIZE(BOTTOM_LEDS),RGB_MAGENTA);
      set_layer_leds(KLAMMERN_NORMAL,ARRAY_SIZE(KLAMMERN_NORMAL),RGB_GREEN);
      set_layer_leds(KLAMMERN_GESCHWEIFT,ARRAY_SIZE(KLAMMERN_GESCHWEIFT),RGB_CYAN);
      set_layer_leds(KLAMMERN_ECKIG,ARRAY_SIZE(KLAMMERN_ECKIG),RGB_YELLOW);
      set_layer_leds(GROESSER_KLEINER,ARRAY_SIZE(GROESSER_KLEINER),RGB_ORANGE);
      set_layer_leds(ZAHLEN,ARRAY_SIZE(ZAHLEN),RGB_GREEN);
      break;
    }
    case 2: {
      set_layer_leds(BOTTOM_LEDS,ARRAY_SIZE(BOTTOM_LEDS),RGB_GREEN);
      set_layer_leds(F_TASTEN,ARRAY_SIZE(F_TASTEN),RGB_GREEN);
      set_layer_leds(ZOOM,ARRAY_SIZE(ZOOM),RGB_BLUE);
      set_layer_leds(STEUERUNG,ARRAY_SIZE(STEUERUNG),RGB_GREEN);
      break;
    }
    case 4: {
      set_layer_leds(BOTTOM_LEDS,ARRAY_SIZE(BOTTOM_LEDS),RGB_RED);
      break;
    }
    case 5: {
      set_layer_leds(BOTTOM_LEDS,ARRAY_SIZE(BOTTOM_LEDS),RGB_MAGENTA);
      set_layer_leds(KLAMMERN_NORMAL,ARRAY_SIZE(KLAMMERN_NORMAL),RGB_GREEN);
      set_layer_leds(KLAMMERN_GESCHWEIFT,ARRAY_SIZE(KLAMMERN_GESCHWEIFT),RGB_CYAN);
      set_layer_leds(KLAMMERN_ECKIG,ARRAY_SIZE(KLAMMERN_ECKIG),RGB_YELLOW);
      set_layer_leds(GROESSER_KLEINER,ARRAY_SIZE(GROESSER_KLEINER),RGB_ORANGE);
      set_layer_leds(ZAHLEN,ARRAY_SIZE(ZAHLEN),RGB_GREEN);
      break;
    }
    case 6: {
      set_layer_leds(BOTTOM_LEDS,ARRAY_SIZE(BOTTOM_LEDS),RGB_GREEN);
      set_layer_leds(F_TASTEN,ARRAY_SIZE(F_TASTEN),RGB_GREEN);
      set_layer_leds(ZOOM,ARRAY_SIZE(ZOOM),RGB_BLUE);
      set_layer_leds(STEUERUNG,ARRAY_SIZE(STEUERUNG),RGB_GREEN);
      break;
    }
    default:
      // don't change default behavior
      break;
  }
  return false;
}

