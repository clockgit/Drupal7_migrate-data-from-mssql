<?php
/**
 * @file
 * flock_feature.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function flock_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ep2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'EP2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EP2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_exp_amount' => 'field_exp_amount',
    'field_exp_bill' => 'field_exp_bill',
    'field_customer' => 'field_customer',
    'field_expense_notes' => 'field_expense_notes',
    'field_exp_reimburse' => 'field_exp_reimburse',
    'field_ticket_ref' => 'field_ticket_ref',
    'field_exp_type' => 'field_exp_type',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_bill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_reimburse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
 echo l(t(\'Print\'), "print/" . current_path(), array(\'attributes\' => array(\'target\' => array(\'_blank\'))));
?>
<p>Total:
<?php
if ( isset($results[0]->field_field_exp_amount[0][\'raw\'][\'value\']) ) {
  $total = 0;
  foreach( $results as $result) {
  $total += $result->field_field_exp_amount[0][\'raw\'][\'value\'];
  }
  echo $total;
}
?>
</p>';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['delta'] = '-1';
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Set to (Needs Exported)',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Set to (Exported)',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Exported';
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date of Work';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['type'] = 'date_custom';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Ticket */
  $handler->display->display_options['fields']['field_ticket_ref']['id'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['field'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_ref']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes_1']['id'] = 'field_expense_notes_1';
  $handler->display->display_options['fields']['field_expense_notes_1']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_expense_notes_1']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1 Expenses';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Needs Exported';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  /* Filter criterion: Content: Reimburse (field_exp_reimburse) */
  $handler->display->display_options['filters']['field_exp_reimburse_value']['id'] = 'field_exp_reimburse_value';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['field'] = 'field_exp_reimburse_value';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_reimburse_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['operator_id'] = 'field_exp_reimburse_value_op';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['label'] = 'Reimburse?';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['operator'] = 'field_exp_reimburse_value_op';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['identifier'] = 'field_exp_reimburse_value';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-07-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = '0';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date of Work';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = '2011-07-01';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ep2';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reimbursements(Expense Report 2)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ep2'] = $view;

  $view = new view();
  $view->name = 'ep3';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'EP3';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EP3';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_exp_amount' => 'field_exp_amount',
    'field_exp_bill' => 'field_exp_bill',
    'field_customer' => 'field_customer',
    'field_expense_notes' => 'field_expense_notes',
    'field_exp_reimburse' => 'field_exp_reimburse',
    'field_ticket_ref' => 'field_ticket_ref',
    'field_exp_type' => 'field_exp_type',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_bill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_reimburse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['delta'] = '-1';
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Set to (Needs Exported)',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Set to (Exported)',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Exported';
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date of Work';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['type'] = 'date_custom';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Ticket */
  $handler->display->display_options['fields']['field_ticket_ref']['id'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['field'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_ref']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Needs Exported';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  /* Filter criterion: Content: Reimburse (field_exp_reimburse) */
  $handler->display->display_options['filters']['field_exp_reimburse_value']['id'] = 'field_exp_reimburse_value';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['field'] = 'field_exp_reimburse_value';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_reimburse_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['operator_id'] = 'field_exp_reimburse_value_op';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['label'] = 'Reimburse?';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['operator'] = 'field_exp_reimburse_value_op';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['identifier'] = 'field_exp_reimburse_value';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-07-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = '0';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date of Work';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = '2011-07-01';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ep3';
  $handler->display->display_options['menu']['title'] = 'Expense Report 3';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $export['ep3'] = $view;

  $view = new view();
  $view->name = 'ep_bill_by_customer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ep bill by customer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    4 => '4',
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'nid_1';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_date' => 'field_date',
    'field_customer' => 'field_customer',
    'php' => 'php',
    'nid_1' => 'nid_1',
    'field_exp_amount' => 'field_exp_amount',
    'field_exp_type' => 'field_exp_type',
    'field_expense_notes' => 'field_expense_notes',
    'field_expense_notes_1' => 'field_expense_notes_1',
    'name' => 'name',
    'edit_node' => 'edit_node',
    'field_billed' => 'field_billed',
  );
  $handler->display->display_options['style_options']['default'] = 'field_customer';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_billed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
$list = array();
foreach($results as $result) {
  $list[$result->node_field_data_field_ticket_ref_nid] = \'\';
}
echo \'<div class="my_totals">Number of Invoices: \' . count($list) . \'</div>\';
?>
<?php
$totals = array();

echo \'<table class="my_totals">\';

foreach($results as $result) {
  $type = $result->field_field_exp_type[0][\'rendered\'][\'#markup\'];
  $amount = $result->field_field_exp_amount[0][\'raw\'][\'value\'];
  empty($totals[$type]) ? $totals[$type] = $amount : $totals[$type] += $amount;
}
$row = 0;
$grand_total = 0;
foreach($totals as $name => $total) {
  $class = ($row % 2) ? \'even\' : \'odd\';
  echo \'<tr class="\' . $class . \'"><td class="type">\' . $name . \':</td><td class="amount">\' . number_format($total, 2, \'.\', \',\') . \'</td></tr>\';
  $grand_total += $total;
  $row ++;
}
$class = ($row % 2) ? \'even\' : \'odd\';
echo \'<tr class="grand_total \' . $class . \'"><td class="type">Total:</td><td class="amount">$\' . number_format($grand_total, 2, \'.\', \',\') . \'</td></tr></table>\'
?>';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['delta'] = '-1';
  /* Relationship: Content: Billing Group (field_billing_group) */
  $handler->display->display_options['relationships']['field_billing_group_nid']['id'] = 'field_billing_group_nid';
  $handler->display->display_options['relationships']['field_billing_group_nid']['table'] = 'field_data_field_billing_group';
  $handler->display->display_options['relationships']['field_billing_group_nid']['field'] = 'field_billing_group_nid';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_mark_bill_as_sent' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['label'] = '';
  $handler->display->display_options['fields']['field_customer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_customer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[counter]. Print Invoice #FL-[nid_1] for [field_customer] ([field_date]) [php]';
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'print/[nid_1]';
  $handler->display->display_options['fields']['nid_1']['alter']['target'] = '[nid_1]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Billed (field_billed) */
  $handler->display->display_options['filters']['field_billed_value']['id'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['table'] = 'field_data_field_billed';
  $handler->display->display_options['filters']['field_billed_value']['field'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_billed_value']['value'] = array(
    'Printed' => 'Printed',
  );
  $handler->display->display_options['filters']['field_billed_value']['group'] = '0';
  /* Filter criterion: Content: Bill to (field_exp_bill) */
  $handler->display->display_options['filters']['field_exp_bill_value']['id'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['filters']['field_exp_bill_value']['field'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_bill_value']['group'] = '0';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-01-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = '0';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Of Service (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-2:+1';
  /* Filter criterion: Content: Customer (field_customer) */
  $handler->display->display_options['filters']['field_customer_value']['id'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_value']['field'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_customer_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_customer_value']['value'] = array(
    'ESSDACK' => 'ESSDACK',
  );
  $handler->display->display_options['filters']['field_customer_value']['group'] = '0';
  /* Filter criterion: Content: Billing Group (field_billing_group) */
  $handler->display->display_options['filters']['field_billing_group_nid']['id'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['table'] = 'field_data_field_billing_group';
  $handler->display->display_options['filters']['field_billing_group_nid']['field'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['relationship'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_billing_group_nid']['group'] = '0';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['operator_id'] = 'field_billing_group_nid_op';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['label'] = 'Billing Group (field_billing_group)';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['operator'] = 'field_billing_group_nid_op';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['identifier'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );

  /* Display: Print Group Invoice */
  $handler = $view->new_display('page', 'Print Group Invoice', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php
$path = request_uri();//current_path();
print"<a class=\\"no-print\\" href=\\"/printpdf$path\\">Print Totals Page</a>";
?>
<div class="logo"><img src="http://flock.essdack.org/sites/flock.essdack.org/files/final_doc_header.png"></div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
$list = array();

foreach($results as $result) {
  $list[$result->node_field_data_field_ticket_ref_nid] = \'\';
}
$invoices = \'\';
foreach($list as $key => $value) {
	$invoices .= \'<span>#FL-\' . $key . \'</span>\';
}
$totals = array();

$output = \'<div class="heading"><div class="print-customer">\' . $result->field_body[0][\'rendered\'][\'#markup\'] . \'</div>\';
$output .= \'<div class="date">Date range:<br />\' . $view->filter[\'field_date_value\']->value[\'min\'] . \' to \' . $view->filter[\'field_date_value\']->value[\'max\'] . \'<br />Printed:<br />\' . date("Y-m-d") .\'</div>\' . \'</div>\';
$output .= \'<div class="invoices">\' . count($list) . \' Invoices <br />\' . $invoices . \'</div>\';
$output .= \'<table class="my_totals">\';

foreach($results as $result) {
  $type = $result->field_field_exp_type[0][\'rendered\'][\'#markup\'];
  $amount = $result->field_field_exp_amount[0][\'raw\'][\'value\'];
  $totals[$type] += $amount;
}

$row = 0;
foreach($totals as $name => $total) {
  $class = ($row % 2) ? \'even\' : \'odd\';
  $output .= \'<tr class="\' . $class . \'"><td class="type">\' . $name . \':</td><td class="amount">\' . number_format($total, 2, \'.\', \',\') . \'</td></tr>\';
  $grand_total += $total;
  $row ++;
}
$class = ($row % 2) ? \'even\' : \'odd\';

$output .= \'<tr class="grand_total \' . $class . \'"><td class="type">Total:</td><td class="amount">$\' . number_format($grand_total, 2, \'.\', \',\') . \'</td></tr></table>\';


echo $output;
?>
<div class="footer center">
<p>Please send a copy of this invoice with payment to:</p>
<p>ESSDACK INT/622
<br>1500 E. 11th Ave, Suite 200
<br>Hutchinson, KS 67501
<br>(620)663-9566
<br>Fax: (620) 663-5734
<br>www.essdack.org
<br><br>If you have questions about this bill, contact:
<br />Kathi Keesling kathik@essdack.org</p>
</div>
';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['delta'] = '-1';
  /* Relationship: Content: Billing Group (field_billing_group) */
  $handler->display->display_options['relationships']['field_billing_group_nid']['id'] = 'field_billing_group_nid';
  $handler->display->display_options['relationships']['field_billing_group_nid']['table'] = 'field_data_field_billing_group';
  $handler->display->display_options['relationships']['field_billing_group_nid']['field'] = 'field_billing_group_nid';
  $handler->display->display_options['relationships']['field_billing_group_nid']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_billing_group_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_mark_bill_as_sent' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['label'] = '';
  $handler->display->display_options['fields']['field_customer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_customer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$window = \'window_\' . $row->nid_1;
$date = $data->field_field_date[0][\'rendered\'][\'#markup\'];
$customer = $data->field_field_customer[0][\'rendered\'][\'#markup\'];
$text = "Print Invoice #FL-$row->nid_1 for $customer ($date)";
?>
<a href="/print/<?php echo $row->nid_1; ?>" onclick="jQuery(this).closest(\'.views-table\').find(\'input\').attr(\'checked\', true); <?php echo $window ?> = window.open(\'/print/<?php echo $row->nid_1 ?>\', \'_popup\'); <?php echo $window ?>.onload=function(){<?php echo $window ?>.print(); <?php echo $window ?>.close();}; return false;"><?php echo $text; ?></a>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[php]';
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'print/[nid_1]';
  $handler->display->display_options['fields']['nid_1']['alter']['target'] = '[nid_1]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Addressee Info */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_billing_group_nid';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Billed (field_billed) */
  $handler->display->display_options['filters']['field_billed_value']['id'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['table'] = 'field_data_field_billed';
  $handler->display->display_options['filters']['field_billed_value']['field'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_billed_value']['group'] = 1;
  $handler->display->display_options['filters']['field_billed_value']['expose']['operator_id'] = 'field_billed_value_op';
  $handler->display->display_options['filters']['field_billed_value']['expose']['label'] = 'Billed (field_billed)';
  $handler->display->display_options['filters']['field_billed_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_billed_value']['expose']['operator'] = 'field_billed_value_op';
  $handler->display->display_options['filters']['field_billed_value']['expose']['identifier'] = 'field_billed_value';
  /* Filter criterion: Content: Bill to (field_exp_bill) */
  $handler->display->display_options['filters']['field_exp_bill_value']['id'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['filters']['field_exp_bill_value']['field'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_bill_value']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-01-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Of Service (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-2:+1';
  /* Filter criterion: Content: Customer (field_customer) */
  $handler->display->display_options['filters']['field_customer_value']['id'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_value']['field'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_customer_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_customer_value']['value'] = array(
    'ESSDACK' => 'ESSDACK',
  );
  $handler->display->display_options['filters']['field_customer_value']['group'] = 1;
  /* Filter criterion: Content: Billing Group (field_billing_group) */
  $handler->display->display_options['filters']['field_billing_group_nid']['id'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['table'] = 'field_data_field_billing_group';
  $handler->display->display_options['filters']['field_billing_group_nid']['field'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['value'] = array(
    4870 => '4870',
  );
  $handler->display->display_options['filters']['field_billing_group_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_billing_group_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['operator_id'] = 'field_billing_group_nid_op';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['label'] = 'Billing Group (field_billing_group)';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['operator'] = 'field_billing_group_nid_op';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['identifier'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  /* Filter criterion: Content: Billing Group (field_billing_group) */
  $handler->display->display_options['filters']['field_billing_group_nid_1']['id'] = 'field_billing_group_nid_1';
  $handler->display->display_options['filters']['field_billing_group_nid_1']['table'] = 'field_data_field_billing_group';
  $handler->display->display_options['filters']['field_billing_group_nid_1']['field'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_billing_group_nid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_billing_group_nid_1']['group'] = 1;
  $handler->display->display_options['path'] = 'inv/print_group';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Group Invoice';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Print Invoice';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-reports';

  /* Display: View Printed */
  $handler = $view->new_display('page', 'View Printed', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$window = \'window_\' . $row->nid_1;
$date = $data->field_field_date[0][\'rendered\'][\'#markup\'];
$customer = $data->field_field_customer[0][\'rendered\'][\'#markup\'];
$text = "Print Invoice #FL-$row->nid_1 for $customer ($date)";
?>
<a href="/print/<?php echo $row->nid_1; ?>" onclick="jQuery(this).closest(\'.views-table\').find(\'input\').attr(\'checked\', true); <?php echo $window ?> = window.open(\'/print/<?php echo $row->nid_1 ?>\', \'_popup\'); <?php echo $window ?>.onload=function(){<?php echo $window ?>.print(); <?php echo $window ?>.close();}; return false;"><?php echo $text; ?></a>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[php]';
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'print/[nid_1]';
  $handler->display->display_options['fields']['nid_1']['alter']['target'] = '[nid_1]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date of Service';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Billed (field_billed) */
  $handler->display->display_options['filters']['field_billed_value']['id'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['table'] = 'field_data_field_billed';
  $handler->display->display_options['filters']['field_billed_value']['field'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['value'] = array(
    'Printed' => 'Printed',
  );
  $handler->display->display_options['filters']['field_billed_value']['group'] = 1;
  /* Filter criterion: Content: Bill to (field_exp_bill) */
  $handler->display->display_options['filters']['field_exp_bill_value']['id'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['filters']['field_exp_bill_value']['field'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_bill_value']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-01-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Service Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-2:+1';
  /* Filter criterion: Content: Customer (field_customer) */
  $handler->display->display_options['filters']['field_customer_value']['id'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_value']['field'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_customer_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_customer_value']['value'] = array(
    'ESSDACK' => 'ESSDACK',
  );
  $handler->display->display_options['filters']['field_customer_value']['group'] = 1;
  /* Filter criterion: Content: Customer (field_customer) */
  $handler->display->display_options['filters']['field_customer_value_1']['id'] = 'field_customer_value_1';
  $handler->display->display_options['filters']['field_customer_value_1']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_value_1']['field'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_customer_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_value_1']['expose']['operator_id'] = 'field_customer_value_1_op';
  $handler->display->display_options['filters']['field_customer_value_1']['expose']['label'] = 'Customer';
  $handler->display->display_options['filters']['field_customer_value_1']['expose']['operator'] = 'field_customer_value_1_op';
  $handler->display->display_options['filters']['field_customer_value_1']['expose']['identifier'] = 'field_customer_value_1';
  /* Filter criterion: Content: Billing Group (field_billing_group) */
  $handler->display->display_options['filters']['field_billing_group_nid']['id'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['table'] = 'field_data_field_billing_group';
  $handler->display->display_options['filters']['field_billing_group_nid']['field'] = 'field_billing_group_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_billing_group_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_billing_group_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['operator_id'] = 'field_billing_group_nid_op';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['label'] = 'Billing Group';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['operator'] = 'field_billing_group_nid_op';
  $handler->display->display_options['filters']['field_billing_group_nid']['expose']['identifier'] = 'group';
  $handler->display->display_options['path'] = 'inv/printed';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'View Printed';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Print Invoice';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-reports';

  /* Display: ESSDACK Invoice */
  $handler = $view->new_display('page', 'ESSDACK Invoice', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_mark_bill_as_sent' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['label'] = '';
  $handler->display->display_options['fields']['field_customer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_customer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$window = \'window_\' . $row->nid_1;
$date = $data->field_field_date[0][\'rendered\'][\'#markup\'];
$customer = $data->field_field_customer[0][\'rendered\'][\'#markup\'];
$text = "Print Invoice #FL-$row->nid_1 for $customer ($date)";
?>
<a href="/print/<?php echo $row->nid_1; ?>" onclick="jQuery(this).closest(\'.views-table\').find(\'input\').attr(\'checked\', true); <?php echo $window ?> = window.open(\'/print/<?php echo $row->nid_1 ?>\', \'_popup\'); <?php echo $window ?>.onload=function(){<?php echo $window ?>.print(); <?php echo $window ?>.close();}; return false;"><?php echo $text; ?></a>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[php]';
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'print/[nid_1]';
  $handler->display->display_options['fields']['nid_1']['alter']['target'] = '[nid_1]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes_1']['id'] = 'field_expense_notes_1';
  $handler->display->display_options['fields']['field_expense_notes_1']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_expense_notes_1']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['edit_node_1']['label'] = 'Edit Ticket';
  $handler->display->display_options['fields']['edit_node_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Bill to (field_exp_bill) */
  $handler->display->display_options['filters']['field_exp_bill_value']['id'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['filters']['field_exp_bill_value']['field'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_bill_value']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-01-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Of Service (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-2:+1';
  /* Filter criterion: Content: Customer (field_customer) */
  $handler->display->display_options['filters']['field_customer_value']['id'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_value']['field'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_customer_value']['value'] = array(
    'ESSDACK' => 'ESSDACK',
  );
  $handler->display->display_options['filters']['field_customer_value']['group'] = 1;
  /* Filter criterion: Content: Billed (field_billed) */
  $handler->display->display_options['filters']['field_billed_value']['id'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['table'] = 'field_data_field_billed';
  $handler->display->display_options['filters']['field_billed_value']['field'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_billed_value']['group'] = 1;
  $handler->display->display_options['filters']['field_billed_value']['expose']['operator_id'] = 'field_billed_value_op';
  $handler->display->display_options['filters']['field_billed_value']['expose']['label'] = 'Billed';
  $handler->display->display_options['filters']['field_billed_value']['expose']['operator'] = 'field_billed_value_op';
  $handler->display->display_options['filters']['field_billed_value']['expose']['identifier'] = 'field_billed_value';
  $handler->display->display_options['path'] = 'inv/essdack';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'ESSDACK';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Print Invoice';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-reports';

  /* Display: Print Invoice */
  $handler = $view->new_display('page', 'Print Invoice', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_mark_bill_as_sent' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['label'] = '';
  $handler->display->display_options['fields']['field_customer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_customer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$window = \'window_\' . $row->nid_1;
$date = $data->field_field_date[0][\'rendered\'][\'#markup\'];
$customer = $data->field_field_customer[0][\'rendered\'][\'#markup\'];
$text = "Print Invoice #FL-$row->nid_1 for $customer ($date)";
?>
<a href="/print/<?php echo $row->nid_1; ?>" onclick="jQuery(this).closest(\'.views-table\').find(\'input\').attr(\'checked\', true); <?php echo $window ?> = window.open(\'/print/<?php echo $row->nid_1 ?>\', \'_popup\'); <?php echo $window ?>.onload=function(){<?php echo $window ?>.print(); <?php echo $window ?>.close();}; return false;"><?php echo $text; ?></a>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[php]';
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'print/[nid_1]';
  $handler->display->display_options['fields']['nid_1']['alter']['target'] = '[nid_1]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Billed (field_billed) */
  $handler->display->display_options['filters']['field_billed_value']['id'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['table'] = 'field_data_field_billed';
  $handler->display->display_options['filters']['field_billed_value']['field'] = 'field_billed_value';
  $handler->display->display_options['filters']['field_billed_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_billed_value']['value'] = array(
    'Printed' => 'Printed',
  );
  $handler->display->display_options['filters']['field_billed_value']['group'] = '0';
  /* Filter criterion: Content: Bill to (field_exp_bill) */
  $handler->display->display_options['filters']['field_exp_bill_value']['id'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['filters']['field_exp_bill_value']['field'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_bill_value']['group'] = '0';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-01-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = '0';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Of Service (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-2:+1';
  /* Filter criterion: Content: Customer (field_customer) */
  $handler->display->display_options['filters']['field_customer_value']['id'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_value']['field'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_customer_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_customer_value']['value'] = array(
    'ESSDACK' => 'ESSDACK',
  );
  $handler->display->display_options['filters']['field_customer_value']['group'] = '0';
  $handler->display->display_options['path'] = 'inv/print_inv';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Print Invoice';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Print Invoice';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-reports';
  $export['ep_bill_by_customer'] = $view;

  $view = new view();
  $view->name = 'expensedash';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'expenseDash';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My expenses';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Ticket */
  $handler->display->display_options['fields']['field_ticket_ref']['id'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['field'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: User has a revision */
  $handler->display->display_options['arguments']['uid_revision']['id'] = 'uid_revision';
  $handler->display->display_options['arguments']['uid_revision']['table'] = 'node';
  $handler->display->display_options['arguments']['uid_revision']['field'] = 'uid_revision';
  $handler->display->display_options['arguments']['uid_revision']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_revision']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid_revision']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['uid_revision']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_revision']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_revision']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['expensedash'] = $view;

  $view = new view();
  $view->name = 'expensereport';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'expensereport';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'expensereport';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_exp_amount' => 'field_exp_amount',
    'field_exp_bill' => 'field_exp_bill',
    'field_customer' => 'field_customer',
    'field_expense_notes' => 'field_expense_notes',
    'field_exp_reimburse' => 'field_exp_reimburse',
    'field_ticket_ref' => 'field_ticket_ref',
    'field_exp_type' => 'field_exp_type',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_bill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_reimburse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No Results to Display';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['delta'] = '-1';
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Set to (Needs Exported)',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Set to (Exported)',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Exported';
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date of Work';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['type'] = 'date_custom';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Ticket */
  $handler->display->display_options['fields']['field_ticket_ref']['id'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['field'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_ref']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<a onclick="javascript:window.open (\'http://flock.essdack.org/print/<?php print $row->nid ?>\', \'print-<?php print $row->nid ?>\',\'location=0,status=0,toolbar=0,titlebar=1\')">Print</a>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Ticket #';
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Needs Exported';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: Content: Reimburse (field_exp_reimburse) */
  $handler->display->display_options['filters']['field_exp_reimburse_value']['id'] = 'field_exp_reimburse_value';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['field'] = 'field_exp_reimburse_value';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_reimburse_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['operator_id'] = 'field_exp_reimburse_value_op';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['label'] = 'Reimburse?';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['operator'] = 'field_exp_reimburse_value_op';
  $handler->display->display_options['filters']['field_exp_reimburse_value']['expose']['identifier'] = 'field_exp_reimburse_value';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-07-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = '0';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date of Work';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = '2011-07-01';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Type (field_exp_type) */
  $handler->display->display_options['filters']['field_exp_type_value']['id'] = 'field_exp_type_value';
  $handler->display->display_options['filters']['field_exp_type_value']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['filters']['field_exp_type_value']['field'] = 'field_exp_type_value';
  $handler->display->display_options['filters']['field_exp_type_value']['group'] = '0';
  $handler->display->display_options['filters']['field_exp_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_exp_type_value']['expose']['operator_id'] = 'field_exp_type_value_op';
  $handler->display->display_options['filters']['field_exp_type_value']['expose']['label'] = 'Type (field_exp_type)';
  $handler->display->display_options['filters']['field_exp_type_value']['expose']['operator'] = 'field_exp_type_value_op';
  $handler->display->display_options['filters']['field_exp_type_value']['expose']['identifier'] = 'field_exp_type_value';
  /* Filter criterion: Content: Customer (field_customer) */
  $handler->display->display_options['filters']['field_customer_value']['id'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_value']['field'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_customer_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_customer_value']['value'] = array(
    'ESSDACKHEALTH' => 'ESSDACKHEALTH',
    'ESSDACK' => 'ESSDACK',
  );
  $handler->display->display_options['filters']['field_customer_value']['group'] = '0';
  $handler->display->display_options['filters']['field_customer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_value']['expose']['operator_id'] = 'field_customer_value_op';
  $handler->display->display_options['filters']['field_customer_value']['expose']['label'] = 'Exclude Customer';
  $handler->display->display_options['filters']['field_customer_value']['expose']['operator'] = 'field_customer_value_op';
  $handler->display->display_options['filters']['field_customer_value']['expose']['identifier'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['expose']['multiple'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'expensereport';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Audit Expense Report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $export['expensereport'] = $view;

  $view = new view();
  $view->name = 'expenses_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Expenses Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Expense Admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_exp_amount' => 'field_exp_amount',
    'field_exp_bill' => 'field_exp_bill',
    'field_expense_notes' => 'field_expense_notes',
    'field_exp_reimburse' => 'field_exp_reimburse',
    'field_ticket_ref' => 'field_ticket_ref',
    'field_exp_type' => 'field_exp_type',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_bill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_reimburse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['delta'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Ticket */
  $handler->display->display_options['fields']['field_ticket_ref']['id'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['field'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 0;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'From Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now - 7 days';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 0;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'To Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now';

  /* Display: user */
  $handler = $view->new_display('page', 'user', 'page');
  $handler->display->display_options['path'] = 'expenses/user';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'User';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Expenses';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: project */
  $handler = $view->new_display('page', 'project', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_project';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_exp_amount' => 'field_exp_amount',
    'field_exp_bill' => 'field_exp_bill',
    'field_expense_notes' => 'field_expense_notes',
    'field_exp_reimburse' => 'field_exp_reimburse',
    'field_ticket_ref' => 'field_ticket_ref',
    'field_exp_type' => 'field_exp_type',
    'name' => 'name',
    'field_date' => 'field_date',
    'field_project' => 'field_project',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_bill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_reimburse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'expenses/project';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Project';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Customer */
  $handler = $view->new_display('page', 'Customer', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_customer';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_exp_amount' => 'field_exp_amount',
    'field_exp_bill' => 'field_exp_bill',
    'field_expense_notes' => 'field_expense_notes',
    'field_exp_reimburse' => 'field_exp_reimburse',
    'field_ticket_ref' => 'field_ticket_ref',
    'field_exp_type' => 'field_exp_type',
    'name' => 'name',
    'field_date' => 'field_date',
    'field_project' => 'field_project',
    'field_customer' => 'field_customer',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_bill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_reimburse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'expenses/customer';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Customer';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['expenses_admin'] = $view;

  $view = new view();
  $view->name = 'expenses_by_ticket';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'expenses by ticket';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Expenses';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_exp_bill' => 'field_exp_bill',
    'field_exp_type' => 'field_exp_type',
    'field_ticket_ref' => 'field_ticket_ref',
    'status' => 'status',
    'field_exp_amount' => 'field_exp_amount',
    'field_exp_reimburse' => 'field_exp_reimburse',
    'field_expense_notes_1' => 'field_expense_notes_1',
    'field_customer' => 'field_customer',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_bill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_reimburse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<p class="total">Total: $
<?php
$total = 0;
foreach($results as $key => $value) {
$total += $value->field_field_exp_amount[0][\'raw\'][\'value\'];
}
//echo money_format(\'%i\', $total);
echo number_format($total, 2, \'.\', \',\');
?>
</p>
';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No Expenses';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Ticket */
  $handler->display->display_options['fields']['field_ticket_ref']['id'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['field'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['hide_alter_empty'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Exported to billing';
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes_1']['id'] = 'field_expense_notes_1';
  $handler->display->display_options['fields']['field_expense_notes_1']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status_1']['id'] = 'status_1';
  $handler->display->display_options['fields']['status_1']['table'] = 'node';
  $handler->display->display_options['fields']['status_1']['field'] = 'status';
  $handler->display->display_options['fields']['status_1']['label'] = 'Exported';
  $handler->display->display_options['fields']['status_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status_1']['not'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  /* Filter criterion: Content: Bill to (field_exp_bill) */
  $handler->display->display_options['filters']['field_exp_bill_value']['id'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['filters']['field_exp_bill_value']['field'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['value'] = array(
    'all' => 'all',
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_bill_value']['group'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Ticket */
  $handler->display->display_options['fields']['field_ticket_ref']['id'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['field'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['label'] = '';
  $handler->display->display_options['fields']['field_ticket_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_ref']['hide_alter_empty'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Exported to billing';
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['label'] = 'Amount Due';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes_1']['id'] = 'field_expense_notes_1';
  $handler->display->display_options['fields']['field_expense_notes_1']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status_1']['id'] = 'status_1';
  $handler->display->display_options['fields']['status_1']['table'] = 'node';
  $handler->display->display_options['fields']['status_1']['field'] = 'status';
  $handler->display->display_options['fields']['status_1']['label'] = 'Exported';
  $handler->display->display_options['fields']['status_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status_1']['not'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;

  /* Display: Invoice Detail */
  $handler = $view->new_display('block', 'Invoice Detail', 'block_1');

  /* Display: Print */
  $handler = $view->new_display('block', 'Print', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Expenses';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Header';
  $handler->display->display_options['header']['area']['content'] = 'Related Expenses';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Ticket */
  $handler->display->display_options['fields']['field_ticket_ref']['id'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['field'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_ref']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Exported to billing';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes_1']['id'] = 'field_expense_notes_1';
  $handler->display->display_options['fields']['field_expense_notes_1']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status_1']['id'] = 'status_1';
  $handler->display->display_options['fields']['status_1']['table'] = 'node';
  $handler->display->display_options['fields']['status_1']['field'] = 'status';
  $handler->display->display_options['fields']['status_1']['label'] = 'Exported';
  $handler->display->display_options['fields']['status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status_1']['not'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Bill to (field_exp_bill) */
  $handler->display->display_options['filters']['field_exp_bill_value']['id'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['filters']['field_exp_bill_value']['field'] = 'field_exp_bill_value';
  $handler->display->display_options['filters']['field_exp_bill_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_exp_bill_value']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Itemized Client Expenses';
  $export['expenses_by_ticket'] = $view;

  $view = new view();
  $view->name = 'export_expense';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'export expense';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'export expense';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
    'field_exp_type' => 'field_exp_type',
    'field_exp_amount' => 'field_exp_amount',
    'field_expense_notes' => 'field_expense_notes',
    'field_ticket_ref' => 'field_ticket_ref',
    'field_exp_bill' => 'field_exp_bill',
    'field_exp_reimburse' => 'field_exp_reimburse',
    'title_1' => 'title_1',
    'field_project' => 'field_project',
    'field_customer' => 'field_customer',
    'field_date' => 'field_date',
    'field_ticket_time' => 'field_ticket_time',
    'field_tags' => 'field_tags',
    'field_expense_notes_1' => 'field_expense_notes_1',
    'field_customer_1' => 'field_customer_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_bill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_exp_reimburse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['delta'] = '-1';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Ticket */
  $handler->display->display_options['fields']['field_ticket_ref']['id'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['field'] = 'field_ticket_ref';
  $handler->display->display_options['fields']['field_ticket_ref']['hide_alter_empty'] = FALSE;
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '(Ticket)Title';
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_project']['label'] = '(Ticket)Project';
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['label'] = '(Ticket)Customer';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_customer']['click_sort_column'] = 'nid';
  $handler->display->display_options['fields']['field_customer']['type'] = 'node_reference_default';
  $handler->display->display_options['fields']['field_customer']['group_column'] = 'nid';
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = '(Ticket)Date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_ticket_time']['id'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['table'] = 'field_data_field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['field'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_ticket_time']['label'] = '(Ticket)Time';
  $handler->display->display_options['fields']['field_ticket_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_tags']['label'] = '(Ticket)Tag';
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes_1']['id'] = 'field_expense_notes_1';
  $handler->display->display_options['fields']['field_expense_notes_1']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_expense_notes_1']['label'] = '(Ticket)Notes';
  $handler->display->display_options['fields']['field_expense_notes_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer_1']['id'] = 'field_customer_1';
  $handler->display->display_options['fields']['field_customer_1']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer_1']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer_1']['label'] = '(Ticket)Customer';
  $handler->display->display_options['fields']['field_customer_1']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'export';
  $export['export_expense'] = $view;

  $view = new view();
  $view->name = 'invoice';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'invoice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'invoice';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['label'] = '';
  $handler->display->display_options['fields']['field_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['label'] = '';
  $handler->display->display_options['fields']['field_customer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'invoice';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_project' => 'field_project',
    'field_customer' => 'field_customer',
    'field_tags' => 'field_tags',
    'field_date' => 'field_date',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '===Expenses===';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ticket_ref_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['invoice'] = $view;

  $view = new view();
  $view->name = 'my_dashboard_expense_';
  $view->description = 'display users recent time tickets on her dashboard';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Dashboard (expense)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Expenses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['delta'] = '-1';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_customer']['group_column'] = 'nid';
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_expense_notes']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_expense_notes']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';

  /* Display: My Dashboard (time_tickets) */
  $handler = $view->new_display('block', 'My Dashboard (time_tickets)', 'block_1');
  $handler->display->display_options['display_description'] = 'displays tickets on the /dashboard page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;

  /* Display: time tickets by user */
  $handler = $view->new_display('page', 'time tickets by user', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project' => 'field_project',
    'field_customer' => 'field_customer',
    'field_tags' => 'field_tags',
    'body' => 'body',
    'field_date' => 'field_date',
    'field_ticket_time' => 'field_ticket_time',
    'edit_node' => 'edit_node',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date Of Service - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator_id'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['label'] = 'Date (field_date:value2)';
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['identifier'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'reports/exp/user';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'by User';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';

  /* Display: time tickets by Customer */
  $handler = $view->new_display('page', 'time tickets by Customer', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_customer';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project' => 'field_project',
    'field_customer' => 'field_customer',
    'field_tags' => 'field_tags',
    'field_expense_notes' => 'field_expense_notes',
    'field_date' => 'field_date',
    'field_ticket_time' => 'field_ticket_time',
    'edit_node' => 'edit_node',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_customer_nid']['id'] = 'field_customer_nid';
  $handler->display->display_options['filters']['field_customer_nid']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_nid']['field'] = 'field_customer_nid';
  $handler->display->display_options['filters']['field_customer_nid']['operator'] = 'in';
  $handler->display->display_options['filters']['field_customer_nid']['value'] = array();
  $handler->display->display_options['filters']['field_customer_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_nid']['expose']['operator_id'] = 'field_customer_nid_op';
  $handler->display->display_options['filters']['field_customer_nid']['expose']['label'] = 'Customer (field_customer)';
  $handler->display->display_options['filters']['field_customer_nid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_customer_nid']['expose']['operator'] = 'field_customer_nid_op';
  $handler->display->display_options['filters']['field_customer_nid']['expose']['identifier'] = 'field_customer_nid';
  $handler->display->display_options['filters']['field_customer_nid']['expose']['multiple'] = TRUE;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Date Of Service - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator_id'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['label'] = 'Date (field_date:value2)';
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['identifier'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'reports/exp/customer';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'by Customer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Expenses';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'user-menu';
  $export['my_dashboard_expense_'] = $view;

  $view = new view();
  $view->name = 'my_dashboard_tickets_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'my_dashboard(tickets)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'my_dashboard(tickets)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_ticket_time']['id'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['table'] = 'field_data_field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['field'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tickets';
  $export['my_dashboard_tickets_'] = $view;

  $view = new view();
  $view->name = 'my_dashboard_time_tickets_';
  $view->description = 'display users recent time tickets on her dashboard';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Dashboard (time_tickets)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project' => 'field_project',
    'field_customer' => 'field_customer',
    'field_tags' => 'field_tags',
    'field_expense_notes' => 'field_expense_notes',
    'field_date' => 'field_date',
    'field_ticket_time' => 'field_ticket_time',
    'edit_node' => 'edit_node',
    'name' => 'name',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Time Tickets</h2>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No Time Tickets to display';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_expense_notes']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_expense_notes']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_ticket_time']['id'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['table'] = 'field_data_field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['field'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_time']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Print';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Print Bill';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'print/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['target'] = 'print';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'End Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now';

  /* Display: My Dashboard (time_tickets) */
  $handler = $view->new_display('block', 'My Dashboard (time_tickets)', 'block_1');
  $handler->display->display_options['display_description'] = 'displays tickets on the /dashboard page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  /* Filter criterion: Content: Date Of Service - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator_id'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['label'] = 'Date (field_date:value2)';
  $handler->display->display_options['filters']['field_date_value2']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['identifier'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';

  /* Display: time tickets by user */
  $handler = $view->new_display('page', 'time tickets by user', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project' => 'field_project',
    'field_customer' => 'field_customer',
    'field_tags' => 'field_tags',
    'body' => 'body',
    'field_date' => 'field_date',
    'field_ticket_time' => 'field_ticket_time',
    'edit_node' => 'edit_node',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Date Of Service - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator_id'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['label'] = 'Date (field_date:value2)';
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['identifier'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'reports/tickets/user';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'by User';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';

  /* Display: time tickets by Customer */
  $handler = $view->new_display('page', 'time tickets by Customer', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_customer';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project' => 'field_project',
    'field_customer' => 'field_customer',
    'field_tags' => 'field_tags',
    'field_expense_notes' => 'field_expense_notes',
    'field_date' => 'field_date',
    'field_ticket_time' => 'field_ticket_time',
    'edit_node' => 'edit_node',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_expense_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Date Of Service - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator_id'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['label'] = 'Date (field_date:value2)';
  $handler->display->display_options['filters']['field_date_value2']['expose']['operator'] = 'field_date_value2_op';
  $handler->display->display_options['filters']['field_date_value2']['expose']['identifier'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Customer (field_customer) */
  $handler->display->display_options['filters']['field_customer_value']['id'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_value']['field'] = 'field_customer_value';
  $handler->display->display_options['filters']['field_customer_value']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_value']['expose']['operator_id'] = 'field_customer_value_op';
  $handler->display->display_options['filters']['field_customer_value']['expose']['label'] = 'Customer (field_customer)';
  $handler->display->display_options['filters']['field_customer_value']['expose']['operator'] = 'field_customer_value_op';
  $handler->display->display_options['filters']['field_customer_value']['expose']['identifier'] = 'field_customer_value';
  $handler->display->display_options['path'] = 'reports/tickets/customer';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'by Customer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Time Tickets';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'user-menu';

  /* Display: Dashboard - no panel */
  $handler = $view->new_display('page', 'Dashboard - no panel', 'page_3');
  $handler->display->display_options['path'] = 'dashboard';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Dashboard';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Expenses</h2>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No Expenses to display';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time Ticket (field_ticket_ref) */
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['id'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['table'] = 'field_data_field_ticket_ref';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['field'] = 'field_ticket_ref_nid';
  $handler->display->display_options['relationships']['field_ticket_ref_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Exported';
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 1;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exp_type']['id'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['table'] = 'field_data_field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['field'] = 'field_exp_type';
  $handler->display->display_options['fields']['field_exp_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_expense_notes']['id'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['table'] = 'field_data_field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['field'] = 'field_expense_notes';
  $handler->display->display_options['fields']['field_expense_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_expense_notes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_expense_notes']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_exp_amount']['id'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['table'] = 'field_data_field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['field'] = 'field_exp_amount';
  $handler->display->display_options['fields']['field_exp_amount']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_exp_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Bill to */
  $handler->display->display_options['fields']['field_exp_bill']['id'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['table'] = 'field_data_field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['field'] = 'field_exp_bill';
  $handler->display->display_options['fields']['field_exp_bill']['hide_alter_empty'] = FALSE;
  /* Field: Content: Reimburse */
  $handler->display->display_options['fields']['field_exp_reimburse']['id'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['table'] = 'field_data_field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['field'] = 'field_exp_reimburse';
  $handler->display->display_options['fields']['field_exp_reimburse']['hide_alter_empty'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense_2_0' => 'expense_2_0',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['relationship'] = 'field_ticket_ref_nid';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'End Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now';
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'block_1' => 0,
    'page_1' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['my_dashboard_time_tickets_'] = $view;

  $view = new view();
  $view->name = 'report_time';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'report-time';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'report-time';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project' => 'field_project',
    'name' => 'name',
    'field_customer' => 'field_customer',
    'field_date' => 'field_date',
    'field_tags' => 'field_tags',
    'field_ticket_time' => 'field_ticket_time',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Detail';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_ticket_time']['id'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['table'] = 'field_data_field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['field'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Print BIll';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Print Bill';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'print/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['target'] = 'print';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'uid';
  /* Sort criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = '0';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Project (field_project) */
  $handler->display->display_options['filters']['field_project_value']['id'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['table'] = 'field_data_field_project';
  $handler->display->display_options['filters']['field_project_value']['field'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['group'] = '0';
  $handler->display->display_options['filters']['field_project_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_value']['expose']['operator_id'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project_value']['expose']['operator'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['identifier'] = 'field_project_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['rid']['group'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'report-time';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Time Report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';

  /* Display: New Media */
  $handler = $view->new_display('page', 'New Media', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Project (field_project) */
  $handler->display->display_options['filters']['field_project_value']['id'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['table'] = 'field_data_field_project';
  $handler->display->display_options['filters']['field_project_value']['field'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['group'] = 1;
  $handler->display->display_options['filters']['field_project_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_value']['expose']['operator_id'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project_value']['expose']['operator'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['identifier'] = 'field_project_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'report-time-nm';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'New Media';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';

  /* Display: Content Specialists */
  $handler = $view->new_display('page', 'Content Specialists', 'page_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Project (field_project) */
  $handler->display->display_options['filters']['field_project_value']['id'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['table'] = 'field_data_field_project';
  $handler->display->display_options['filters']['field_project_value']['field'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['group'] = 1;
  $handler->display->display_options['filters']['field_project_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_value']['expose']['operator_id'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project_value']['expose']['operator'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['identifier'] = 'field_project_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'report-time-cs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Content Specialists';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';

  /* Display: Business Office */
  $handler = $view->new_display('page', 'Business Office', 'page_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Project (field_project) */
  $handler->display->display_options['filters']['field_project_value']['id'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['table'] = 'field_data_field_project';
  $handler->display->display_options['filters']['field_project_value']['field'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['group'] = 1;
  $handler->display->display_options['filters']['field_project_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_value']['expose']['operator_id'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project_value']['expose']['operator'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['identifier'] = 'field_project_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'report-time-bo';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Business Office';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';

  /* Display: Ex Serv */
  $handler = $view->new_display('page', 'Ex Serv', 'page_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Project (field_project) */
  $handler->display->display_options['filters']['field_project_value']['id'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['table'] = 'field_data_field_project';
  $handler->display->display_options['filters']['field_project_value']['field'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['group'] = 1;
  $handler->display->display_options['filters']['field_project_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_value']['expose']['operator_id'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project_value']['expose']['operator'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['identifier'] = 'field_project_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'report-time-es';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'External Services';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';

  /* Display: Support Staff */
  $handler = $view->new_display('page', 'Support Staff', 'page_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Project (field_project) */
  $handler->display->display_options['filters']['field_project_value']['id'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['table'] = 'field_data_field_project';
  $handler->display->display_options['filters']['field_project_value']['field'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['group'] = 1;
  $handler->display->display_options['filters']['field_project_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_value']['expose']['operator_id'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project_value']['expose']['operator'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['identifier'] = 'field_project_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'report-time-ss';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Support Staff';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';

  /* Display: Leadership Team */
  $handler = $view->new_display('page', 'Leadership Team', 'page_6');
  $handler->display->display_options['path'] = 'report-time-lt';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Leadership team';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';

  /* Display: Tech Team */
  $handler = $view->new_display('page', 'Tech Team', 'page_7');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Project (field_project) */
  $handler->display->display_options['filters']['field_project_value']['id'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['table'] = 'field_data_field_project';
  $handler->display->display_options['filters']['field_project_value']['field'] = 'field_project_value';
  $handler->display->display_options['filters']['field_project_value']['group'] = 1;
  $handler->display->display_options['filters']['field_project_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_value']['expose']['operator_id'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project_value']['expose']['operator'] = 'field_project_value_op';
  $handler->display->display_options['filters']['field_project_value']['expose']['identifier'] = 'field_project_value';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'report-time-tt';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tech Team';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $export['report_time'] = $view;

  $view = new view();
  $view->name = 'ticketdash';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TicketDash';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My tickets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_project']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'node_reference_default',
  );
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
  );
  /* Field: Content: Addressee Info */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '11';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_ticket_time']['id'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['table'] = 'field_data_field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['field'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_time']['type'] = 'editable';
  $handler->display->display_options['fields']['field_ticket_time']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => ' ',
      'decimal_separator' => '.',
      'scale' => '2',
      'prefix_suffix' => 0,
    ),
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now - 7 day';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ticketdash'] = $view;

  $view = new view();
  $view->name = 'tickets_by_catagory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tickets Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tickets Admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_customer' => 'field_customer',
    'field_date' => 'field_date',
    'body' => 'body',
    'field_project' => 'field_project',
    'field_tags' => 'field_tags',
    'field_ticket_time' => 'field_ticket_time',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date Of Service */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Addressee Info */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['hide_alter_empty'] = FALSE;
  /* Field: Content: Tag */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_ticket_time']['id'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['table'] = 'field_data_field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['field'] = 'field_ticket_time';
  $handler->display->display_options['fields']['field_ticket_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -7 days';
  /* Filter criterion: Content: Date Of Service -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now';

  /* Display: user */
  $handler = $view->new_display('page', 'user', 'page');
  $handler->display->display_options['path'] = 'tickets/user';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'User';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Tickets';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: project */
  $handler = $view->new_display('page', 'project', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_project';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_customer' => 'field_customer',
    'field_date' => 'field_date',
    'body' => 'body',
    'field_project' => 'field_project',
    'field_tags' => 'field_tags',
    'field_ticket_time' => 'field_ticket_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'tickets/project';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Project';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Customer */
  $handler = $view->new_display('page', 'Customer', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_customer';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_customer' => 'field_customer',
    'field_date' => 'field_date',
    'body' => 'body',
    'field_project' => 'field_project',
    'field_tags' => 'field_tags',
    'field_ticket_time' => 'field_ticket_time',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_tags' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_ticket_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'tickets/customer';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Customer';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['tickets_by_catagory'] = $view;

  return $export;
}
