# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-TheSeer_fXSL/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	fXSL
PORTVERSION=	1.1.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.netpirates.net/get/
PKGNAMEPREFIX=	pear-TheSeer_
EXTRACT_SUFX=	.tgz

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	XSL wrapper / extension to the PHP 5.x XSLTProcessor

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.netpirates.net.reg:devel/pear-channel-theseer
RUN_DEPENDS=	${PEARDIR}/.channels/pear.netpirates.net.reg:devel/pear-channel-theseer

BROKEN_powerpc64=	fails to package: Signal 11

USE_PHP=	dom xml xsl
PEAR_CHANNEL=	theseer
USES=	pear

.include <bsd.port.mk>
