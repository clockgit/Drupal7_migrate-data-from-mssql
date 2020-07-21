<?php
class DistrictsMigration extends  BasicMigration {
	public function __construct() {
		parent::__construct();
		$this->description = t('Districts list for node ref');
		$this->map = new MigrateSQLMap($this->machineName,
			array(
				'districtid' => array(
					'type' => 'int',
					'unsigned' => TRUE,
					'not null' => TRUE,
					'description' => 'DistrictsDB pkey',
					'alias' => 'id',
				)
			),
			MigrateDestinationNode::getKeySchema()
		);
	
		$query = db_select('DISTRICTSDB', 'd', array('target' => 'gsmu'))
			->fields('d',array('districtid', 'distid', 'districtname', 'usdnumber', 'address', 'address2', 'city', 'state', 'zip'));
		
		$this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));
		$this->destination = new MigrateDestinationNode('customer');
	
		$this->addFieldMapping('nid');
		$this->addFieldMapping('is_new')
			->defaultValue(TRUE);
		$this->addFieldMapping('language')
			->defaultValue('en');
		$this->addFieldMapping('uid')->defaultValue(1);
		$this->addFieldMapping('title', 'districtname');
		
		$this->addFieldMapping('field_districtid', 'districtid');
		$this->addFieldMapping('field_distid', 'distid');
		$this->addFieldMapping('field_usd', 'usdnumber');
		$this->addFieldMapping('field_address', 'address');
		$this->addFieldMapping('field_address2', 'address2');
		$this->addFieldMapping('field_city', 'city');
		$this->addFieldMapping('field_state', 'state');
		$this->addFieldMapping('field_zip', 'zip');
	
		// Unmapped destination fields
		$this->addUnmigratedDestinations(array('revision_uid', 'created', 'changed', 'status', 'promote', 'sticky', 'revision', 'path', 'comment'),'DNM');
	} 
	
}