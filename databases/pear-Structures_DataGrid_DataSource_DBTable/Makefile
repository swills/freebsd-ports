# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/databases/pear-Structures_DataGrid_DataSource_DBTable/Makefile 486751 2018-12-06 11:22:12Z rene $

PORTNAME=	Structures_DataGrid_DataSource_DBTable
PORTVERSION=	0.1.7
CATEGORIES=	databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	DataSource driver using PEAR::DB_Table

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:devel/pear-Structures_DataGrid@${PHP_FLAVOR} \
		${PEARDIR}/DB/Table.php:databases/pear-DB_Table@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:devel/pear-Structures_DataGrid@${PHP_FLAVOR} \
		${PEARDIR}/DB/Table.php:databases/pear-DB_Table@${PHP_FLAVOR}

USES=	pear
USE_PHP=	mysql
IGNORE_WITH_PHP=	71 72 73
NO_ARCH=	yes

.include <bsd.port.mk>
