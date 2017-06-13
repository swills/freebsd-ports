# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-pdepend-staticReflection/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	staticReflection
PORTVERSION=	1.0.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.pdepend.org/get/
PKGNAMEPREFIX=	pear-${PEAR_CHANNEL}_

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	staticReflection package for PHP

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.pdepend.org.reg:devel/pear-channel-pdepend
RUN_DEPENDS=	${PEARDIR}/.channels/pear.pdepend.org.reg:devel/pear-channel-pdepend

USE_PHP=	tokenizer
PEAR_CHANNEL=	pdepend
USES=	pear

.include <bsd.port.mk>
