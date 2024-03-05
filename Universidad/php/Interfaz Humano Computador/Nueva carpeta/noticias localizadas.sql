-- phpMyAdmin MySQL-Dump
-- version 2.3.2
-- http://www.phpmyadmin.net/ (download page)
--
-- servidor: localhost
-- Tiempo de generación: 15-01-2007 a las 15:53:55
-- Versión del servidor: 4.00.18
-- Versión de PHP: 4.3.5
-- Base de datos : `lindavista`
-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `noticias_en`
--

CREATE TABLE noticias_en (
  id smallint(5) unsigned NOT NULL auto_increment,
  titulo varchar(100) NOT NULL default '',
  texto text NOT NULL,
  categoria enum('promociones','ofertas','costas') NOT NULL default 'promociones',
  fecha date NOT NULL default '0000-00-00',
  imagen varchar(100) default NULL,
  PRIMARY KEY  (id)
) ENGINE=MyISAM COMMENT='Noticias de la inmobiliaria Lindavista';

--
-- Volcar la base de datos para la tabla `noticias_en`
--

INSERT INTO noticias_en VALUES (1, 'New resort in the coast', 'A new collection of apartments from the <SPAN CLASS="importante">Villa Romana</SPAN> resort are now on sale. Located at the first line of the beach, this exciting, modern resort has all the commodities and luxury qualities. Dont miss the opportunity to enjoy one of the best apartments in the best beach of the coast.', 'costas', '2007-01-16', 'villa_romana.jpg');
INSERT INTO noticias_en VALUES (2, '"Nueva Atalaya" resort finished', 'The owners of the fabulous villas at the <SPAN CLASS="importante">Nueva Atalaya</SPAN> resort have just received their keys. The works on phase II of the resort, which has raised great expectations, will begin very soon.', 'promociones', '2007-01-09', 'nueva_atalaya.jpg');
-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `noticias_es`
--

CREATE TABLE noticias_es (
  id smallint(5) unsigned NOT NULL auto_increment,
  titulo varchar(100) NOT NULL default '',
  texto text NOT NULL,
  categoria enum('promociones','ofertas','costas') NOT NULL default 'promociones',
  fecha date NOT NULL default '0000-00-00',
  imagen varchar(100) default NULL,
  PRIMARY KEY  (id)
) ENGINE=MyISAM COMMENT='Noticias de la inmobiliaria Lindavista';

--
-- Volcar la base de datos para la tabla `noticias_es`
--

INSERT INTO noticias_es VALUES (1, 'Nueva promoción en la costa', 'Ya están a la venta los apartamentos de la nueva promoción <SPAN CLASS="importante">Villa Romana</SPAN>. Situada en primera lónea de playa, esta moderna urbanización cuenta con todas las comodidades y unas calidades de lujo. Una oportunidad única de disfrutar de un apartamento en la mejor playa de la costa.', 'costas', '2007-01-16', 'villa_romana.jpg');
INSERT INTO noticias_es VALUES (2, 'Finalizada la promoción "Nueva Atalaya"', 'Ya se han entregado las llaves a los propietarios de las magníficas viviendas de la promoción <SPAN CLASS="importante">Nueva Atalaya</SPAN>. En breve comenzarón las obras de la fase II, para la cual existe una gran expectación.', 'promociones', '2007-01-09', 'nueva_atalaya.jpg');

