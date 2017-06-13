# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/pear-htmlpurifier/Makefile 437176 2017-03-28 23:32:17Z feld $

PORTNAME=	htmlpurifier
PORTVERSION=	4.9.2
PORTREVISION=	0
CATEGORIES=	devel pear www
MASTER_SITES=	http://htmlpurifier.org/get/ \
		LOCAL
DISTNAME=	HTMLPurifier-${PORTVERSION}
PKGNAMEPREFIX=	pear-

MAINTAINER=	feld@FreeBSD.org
COMMENT=	PHP HTML filter library

LICENSE=	LGPL21

BUILD_DEPENDS=	${PEARDIR}/.channels/htmlpurifier.org.reg:devel/pear-channel-htmlpurifier
RUN_DEPENDS=	${PEARDIR}/.channels/htmlpurifier.org.reg:devel/pear-channel-htmlpurifier

PEAR_CHANNEL=	htmlpurifier.org
USES=	pear

NO_ARCH=	yes

.include <bsd.port.mk>
