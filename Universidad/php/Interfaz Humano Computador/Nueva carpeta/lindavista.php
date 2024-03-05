<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN"
   "http://www.w3.org/TR/html4/strict.dtd">

<?PHP
// Incluir fichero con la informaci�n de los idiomas
   require ("local.php");

// Establecer lenguaje. Por defecto se toma el espa�ol
   $lang = $_REQUEST["lang"];
   if (!isset($lang) || !in_array($lang, $idiomas))
      $lang = 'es';

// Cargar textos localizados
   require ("$lang/local.php");

   print ("<HTML LANG='$lang'>\n");

// Cabecera de la p�gina
   $t_tit_home = $textos['tit_home'];
   $t_content = $textos['content'];

   print ("<HEAD>\n");
   print ("   <TITLE>$t_tit_home</TITLE>\n");
   print ("   <LINK REL='stylesheet' TYPE='text/css' HREF='estilo.css'>\n");
   print ("   <META NAME='description' CONTENT='$t_content'>\n");
   print ("   <META HTTP-EQUIV='Content-Type' CONTENT='text/html; charset=ISO-8859-1'>\n");
   print ("</HEAD>\n");

?>

<BODY>

<DIV ID="titulo">
   
<?PHP
   print ("   <IMG SRC='$lang/rotulo_lindavista2.gif' ALT='Lindavista' WIDTH='600' HEIGHT='70'>\n");
   foreach ($idiomas as $idioma)
   {
      $t_idioma = $nombres_idiomas[$idioma];
      print (" [ <A CLASS='enlace_idioma' HREF='" . $_SERVER['PHP_SELF'] . 
             "?lang=$idioma'>$t_idioma</A> " .
             " <IMG SRC='$idioma/flag.gif' ALT='$t_idioma' WIDTH='13' HEIGHT='10'> ]\n");
   }
?>

</DIV>

<DIV ID="contenedor">

<DIV ID="menu">

<?PHP
   $t_menu_inf = $textos['menu_inf'];
   $t_menu_pro = $textos['menu_pro'];
   $t_menu_ser = $textos['menu_ser'];
   $t_menu_not = $textos['menu_not'];
   $t_menu_con = $textos['menu_con'];
   print ("   <UL>\n");
   print ("      <LI>$t_menu_inf\n");
   print ("      <LI>$t_menu_pro\n");
   print ("      <LI>$t_menu_ser\n");
   print ("      <LI>$t_menu_not\n");
   print ("      <LI>$t_menu_con\n");
   print ("   </UL>\n");
?>

</DIV>
      
<DIV ID="derecha">
   <UL CLASS="anuncio">
      <LI CLASS="anuncio"><IMG SRC="anuncio1.jpg" WIDTH="79" HEIGHT="79" ALT="Anuncio 1">
      <LI CLASS="anuncio"><IMG SRC="anuncio2.jpg" WIDTH="79" HEIGHT="79" ALT="Anuncio 2">
      <LI CLASS="anuncio"><IMG SRC="anuncio3.jpg" WIDTH="79" HEIGHT="79" ALT="Anuncio 3">
   </UL>
</DIV>

<DIV ID="info">

<?PHP
   $t_noticias = $textos['noticias'];
   print ("   <H1>$t_noticias</H1>\n");

// Conectar con el servidor de base de datos
   $conexion = mysqli_connect ("localhost", "root", "")
      or die ("No se puede conectar con el servidor");

// Seleccionar base de datos
   mysqli_select_db ($conexion, "lindavista")
      or die ("No se puede seleccionar la base de datos");

// Enviar consulta
   $instruccion = "select * from noticias_$lang order by fecha desc";
   $consulta = mysqli_query ($conexion, $instruccion)
       or die ("Fallo en la consulta");

// Mostrar resultados de la consulta
   $nfilas = mysqli_num_rows ($consulta);
   if ($nfilas > 0)
   {
      for ($i=0; $i<$nfilas; $i++)
      {
         $resultado = mysqli_fetch_array ($consulta);
         print ("   <DIV CLASS='noticia'>\n");
         print ("      <H2><SPAN CLASS='fecha'>" . date2string($resultado['fecha']) .
                          "</SPAN> - " . $resultado['titulo'] . "</H2>\n");
         print ("      <IMG CLASS='foto-noticia' SRC='fotos/" .
                          $resultado['imagen'] . "' WIDTH='100' HEIGHT='75' " .
                          "ALT='" . $resultado['titulo'] . "'>\n");
         print ("      <P CLASS='textonoticia'>" . $resultado['texto'] . "</P>\n");
         print ("   </DIV>\n");
      }
   }

// Cerrar conexi�n
   mysqli_close ($conexion);
?>

</DIV>

<DIV ID="clear"></DIV>

</DIV>

<DIV ID="pie">
   <ADDRESS>

<?PHP
   $t_lema = $textos['lema'];
   print ("$t_lema");
?>

   </ADDRESS>
</DIV>

<P>

<?PHP
   $t_logo_html = $textos['logo_html'];
   $t_logo_css = $textos['logo_css'];
   $t_logo_wai = $textos['logo_wai'];
   print ("   <IMG SRC='valid-html401.gif' TITLE='$t_logo_html' ALT='$t_logo_html' WIDTH='88' HEIGHT='31'>\n");
   print ("   <IMG SRC='vcss.png' TITLE='$t_logo_html' ALT='$t_logo_css' WIDTH='88' HEIGHT='31'>\n");
   print ("   <IMG SRC='wcag1AAA.gif' TITLE='$t_logo_html' ALT='$t_logo_wai' WIDTH='88' HEIGHT='31'>\n");
?>

</P>

</BODY>
</HTML>