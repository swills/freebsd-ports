# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-TheSeer_fXSL/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	fXSL
PORTVERSION=	1.1.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.netpirates.net/get/
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}TheSeer_
EXTRACT_SUFX=	.tgz

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	XSL wrapper / extension to the PHP 5.x XSLTProcessor

LICENSE=	BSD3CLAUSE

BROKEN_powerpc64=	fails to package: Signal 11

USE_PHP=	dom xml xsl
PEAR_CHANNEL=	theseer
USES=	pear

.include <bsd.port.mk>
