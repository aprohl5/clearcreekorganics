jQuery(document).ready(function( $ ) {

	var a = location.pathname.split("/");
	if ( (a.length > 2 && a[2] == "recipes") || (a[1] == "ingredients") ) {
 		$('#sidebar-first #block-views-ingredients-block .content li' ).css({
			"display" : "list-item"
		});
	}
	
	
	
	var liStyle = $('#sidebar-first #block-views-ingredients-block .content li').css("display");

	if (liStyle == 'none') {
		$( "#nice-menu-5 .menu-719" ).hover(
  			function() {
    			$( '#sidebar-first #block-views-ingredients-block .content li' ).css({
    				"display" : "list-item"
  				});
  			}, function() {
    			$( '#sidebar-first #block-views-ingredients-block .content li' ).css({
    				"display" : "none"
  				});
  			}
		);
	}
	
	if (liStyle == 'none') {
		$( "#sidebar-first #block-views-ingredients-block .content ul" ).hover(
  			function() {
    			$( '#sidebar-first #block-views-ingredients-block .content li' ).css({
    				"display" : "list-item"
  				});
  			}, function() {
    			$( '#sidebar-first #block-views-ingredients-block .content li' ).css({
    				"display" : "none"
  				});
  			}
		);
	}
	
});
