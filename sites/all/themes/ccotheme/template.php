<?php

function ccotheme_preprocess_node(&$variables) {
$variables['date'] = format_date($variables['created'] ,'simple');
$variables['submitted'] = t('Posted on !datetime', array('!datetime' => $variables['date']));

}