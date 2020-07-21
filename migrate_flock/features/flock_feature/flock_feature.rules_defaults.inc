<?php
/**
 * @file
 * flock_feature.rules_defaults.inc
 */

/**
 * Implementation of hook_default_rules_configuration().
 */
function flock_feature_default_rules_configuration() {
  $items = array();
  $items['rules_mark_bill_as_sent'] = entity_import('rules_config', '{ "rules_mark_bill_as_sent" : {
      "LABEL" : "Mark bill as sent",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "php", "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "php_eval" : { "code" : "$node-\\u003efield_billed[LANGUAGE_NONE][0][\'value\'] = \'Printed\';\\r\\nnode_save($node);\\r\\ndrupal_set_message(l(\\"$node-\\u003etitle marked \'Printed\'.\\", \\"node\\/$node-\\u003enid\\", array()));\\r\\n\\/\\/dpm($node);\\r\\n" } }
            ],
            "LABEL" : "update node with billed"
          }
        }
      ]
    }
  }');
  return $items;
}
