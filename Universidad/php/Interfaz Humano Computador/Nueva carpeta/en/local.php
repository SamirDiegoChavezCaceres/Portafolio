<?PHP
// -----------------------------------------------------------------
// Localización: inglés
// -----------------------------------------------------------------

// -----------------------------------------------------------------
// Textos
// -----------------------------------------------------------------
   $textos = array (
      "tit_home"        => "Lindavista Real Estate",
      "content"         => "Lindavista Real Estate web site",
      "menu_inf"        => "Information",
      "menu_pro"        => "Promotions",
      "menu_ser"        => "Services", 
      "menu_not"        => "News", 
      "menu_con"        => "Contact",
      "noticias"        => "News",
      "lema"            => "Lindavista Real Estate. Building a better world for you",
      "logo_html"       => "Valid HTML",
      "logo_css"        => "Valid CSS",
      "logo_wai"        => "Triple-A Level conformance logo, from " .
                           "W3C-WAI Web Content Accessibility Guidelines 1.0"
   );

// -----------------------------------------------------------------
// Formato de la hora
// -----------------------------------------------------------------
function date2string ($date)
{
   // Formato: año (cuatro dígitos) /
   //          mes del año (número, sin ceros) /
   //          día del mes (número, sin ceros)
   // Ejemplo: 2007/1/15
   $string = date ("Y/n/j", strtotime($date));
   return ($string);
}
?>
