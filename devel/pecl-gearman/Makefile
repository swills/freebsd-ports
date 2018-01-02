# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/pecl-gearman/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	gearman
PORTVERSION=	1.1.2
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Gearman API

LICENSE=	PHP301

LIB_DEPENDS=	libgearman.so:devel/gearmand

USES=		php:pecl
CONFIGURE_ARGS=	--with-gearman
IGNORE_WITH_PHP=	70 71 72

.include <bsd.port.mk>
