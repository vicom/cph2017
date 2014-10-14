<?php
/**
 * @file
 * cph_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cph_rules_default_rules_configuration() {
  $items = array();
  $items['rules_wiedervorlage'] = entity_import('rules_config', '{ "rules_wiedervorlage" : {
      "LABEL" : "Wiedervorlage",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Aufgabe" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--aufgabe" : { "bundle" : "aufgabe" } },
      "IF" : [
        { "text_matches" : {
            "text" : [ "node:field-aufgabe-status:name" ],
            "match" : "Erledigt",
            "operation" : "regex"
          }
        },
        { "data_is_empty" : { "data" : [ "node:field-datum-beendet" ] } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Beendet Datum gesetzt" } },
        { "data_set" : { "data" : [ "node:field-datum-beendet" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
