# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/devel/pear-File_Iterator/Makefile 443134 2017-06-11 02:28:01Z sunpoet $

PORTNAME=	File_Iterator
PORTVERSION=	1.3.3
CATEGORIES=	devel www pear
MASTER_SITES=	http://pear.phpunit.de/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR FileIterator implementation

BUILD_DEPENDS=	${PEARDIR}/.channels/pear.phpunit.de.reg:devel/pear-channel-phpunit
RUN_DEPENDS=	${PEARDIR}/.channels/pear.phpunit.de.reg:devel/pear-channel-phpunit

BROKEN=		unfetchable, redirects to https://phpunit.de/

USES=	pear
PEAR_CHANNEL=	phpunit

.include <bsd.port.mk>
