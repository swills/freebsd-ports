# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/textproc/pear-Text_Template/Makefile 443143 2017-06-11 02:28:44Z sunpoet $

PORTNAME=	Text_Template
PORTVERSION=	1.2.0
CATEGORIES=	textproc www pear
MASTER_SITES=	http://pear.phpunit.de/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Simple template engine

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.phpunit.de.reg:devel/pear-channel-phpunit
RUN_DEPENDS=	${PEARDIR}/.channels/pear.phpunit.de.reg:devel/pear-channel-phpunit

BROKEN=		unfetchable, redirects to https://phpunit.de/

USES=	pear
PEAR_CHANNEL=	phpunit

.include <bsd.port.mk>
