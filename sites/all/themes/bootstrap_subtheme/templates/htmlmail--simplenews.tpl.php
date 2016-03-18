<?php


  $template_name = basename(__FILE__);
  $current_path = realpath(NULL);
  $current_len = strlen($current_path);
  $template_path = realpath(dirname(__FILE__));
  if (!strncmp($template_path, $current_path, $current_len)) {
    $template_path = substr($template_path, $current_len + 1);
  }
  $template_url = url($template_path, array('absolute' => TRUE));
?>
<head> 
<style type="text/css">
	font-family: Arial, san-serif;
	font-size: 12px;
 	h2 a, h3 a { 
		color: #000000; 
		text-decoration: none;}

</style> 
</head>



<body leftmargin="0" marginwidth="0" topmargin="0" marginheight="0" offset="0">
<table width="600" cellpadding="0" cellspacing="0" border="0" valign="top" align="center">
<tr>
<td>
<div align="center"><img src="http://cph.vicom-agency.de/sites/default/files/cph_logo.png" alt="CPH-Hotels Newsletter" border="0" hspace="5" vspace="5" /></div>
<?php echo $body; ?></td>
</tr>
</table>
</body>