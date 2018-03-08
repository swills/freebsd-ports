# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/textproc/pear-Structures_DataGrid_Renderer_XML/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Structures_DataGrid_Renderer_XML
PORTVERSION=	0.1.3
CATEGORIES=	textproc databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Renderer driver that generates a XML string

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:databases/pear-Structures_DataGrid_DataSource_Array@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:databases/pear-Structures_DataGrid_DataSource_Array@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
