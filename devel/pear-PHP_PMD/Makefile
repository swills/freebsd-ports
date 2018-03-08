# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-PHP_PMD/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	PHP_PMD
PORTVERSION=	1.5.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.phpmd.org/get/

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP Mess Detector

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

PORTSCOUT=	skipv=2.*

USES=	pear
PEAR_CHANNEL=	phpmd
USE_PHP=	dom simplexml
NO_ARCH=	yes

.include <bsd.port.mk>
