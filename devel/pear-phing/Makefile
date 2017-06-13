# $FreeBSD: head/devel/pear-phing/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	phing
PORTVERSION=	2.6.1
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.phing.info/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	mm@FreeBSD.org
COMMENT=	PHP project build system based on Apache Ant

LICENSE=	LGPL3

PEAR_CHANNEL=	phing
USES=	pear

BUILD_DEPENDS+= ${PEARDIR}/.channels/pear.phing.info.reg:devel/pear-channel-phing
RUN_DEPENDS+= ${PEARDIR}/.channels/pear.phing.info.reg:devel/pear-channel-phing

.include <bsd.port.mk>
