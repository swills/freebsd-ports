# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/databases/pear-Structures_DataGrid_DataSource_DBTable/Makefile 489349 2019-01-05 15:47:56Z rene $

PORTNAME=	Structures_DataGrid_DataSource_DBTable
PORTVERSION=	0.1.7
CATEGORIES=	databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	DataSource driver using PEAR::DB_Table

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:devel/pear-Structures_DataGrid@${PHP_FLAVOR} \
		${PEARDIR}/DB/Table.php:databases/pear-DB_Table@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:devel/pear-Structures_DataGrid@${PHP_FLAVOR} \
		${PEARDIR}/DB/Table.php:databases/pear-DB_Table@${PHP_FLAVOR}

USES=	pear
USE_PHP=	mysqli
NO_ARCH=	yes

.include <bsd.port.mk>
