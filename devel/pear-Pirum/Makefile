# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-Pirum/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	Pirum
PORTVERSION=	1.1.5
CATEGORIES=	devel www pear
MASTER_SITES=	http://pear.pirum-project.org/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Simple PEAR channel server manager

LICENSE=	MIT

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.pirum-project.org.reg:devel/pear-channel-pirum
RUN_DEPENDS=	${PEARDIR}/.channels/pear.pirum-project.org.reg:devel/pear-channel-pirum

PEAR_CHANNEL=	pirum
USES=	pear

.include <bsd.port.mk>
