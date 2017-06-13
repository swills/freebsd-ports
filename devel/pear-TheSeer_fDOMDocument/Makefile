# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-TheSeer_fDOMDocument/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	fDOMDocument
PORTVERSION=	1.4.3
CATEGORIES=	devel www pear
MASTER_SITES=	http://pear.netpirates.net/get/
PKGNAMEPREFIX=	pear-TheSeer_

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Extension to PHP's standard DOM

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.netpirates.net.reg:devel/pear-channel-theseer
RUN_DEPENDS=	${PEARDIR}/.channels/pear.netpirates.net.reg:devel/pear-channel-theseer

USE_PHP=	dom xml
PEAR_CHANNEL=	theseer
USES=	pear

.include <bsd.port.mk>
