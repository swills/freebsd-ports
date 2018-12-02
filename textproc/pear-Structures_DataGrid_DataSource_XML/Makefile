# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/textproc/pear-Structures_DataGrid_DataSource_XML/Makefile 486473 2018-12-02 17:43:33Z antoine $

PORTNAME=	Structures_DataGrid_DataSource_XML
PORTVERSION=	0.2.0
CATEGORIES=	textproc databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	DataSource driver using XML files

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:databases/pear-Structures_DataGrid_DataSource_Array@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:databases/pear-Structures_DataGrid_DataSource_Array@${PHP_FLAVOR}

USES=	pear
USE_PHP=	mysql
IGNORE_WITH_PHP=70 71 72 73

.include <bsd.port.mk>
