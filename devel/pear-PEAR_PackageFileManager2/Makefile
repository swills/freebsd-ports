# Created by: Sylvio Cesar <sylvio@FreeBSD.org>
# $FreeBSD: head/devel/pear-PEAR_PackageFileManager2/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	PEAR_PackageFileManager2
PORTVERSION=	1.0.4
CATEGORIES=	devel www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR class to maintain PEAR packages

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PEARDIR}/PEAR/PackageFileManager/Plugins.php:devel/pear-PEAR_PackageFileManager_Plugins@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/PEAR/PackageFileManager/Plugins.php:devel/pear-PEAR_PackageFileManager_Plugins@${PHP_FLAVOR}

USES=	pear

.include <bsd.port.mk>
