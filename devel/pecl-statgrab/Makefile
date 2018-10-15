# Created by: Tim Bishop <tim@bishnet.net>
# $FreeBSD: head/devel/pecl-statgrab/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	statgrab
PORTVERSION=	0.6.0
PORTREVISION=	2
CATEGORIES=	devel pear
DISTNAME=	Statgrab-${PORTVERSION}

MAINTAINER=	tdb@FreeBSD.org
COMMENT=	PECL extension to retrieve information from libstatgrab

LIB_DEPENDS=	libstatgrab0.so:devel/libstatgrab0

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72 73

CONFIGURE_ARGS=	--with-statgrab=${LOCALBASE}

.include <bsd.port.mk>
