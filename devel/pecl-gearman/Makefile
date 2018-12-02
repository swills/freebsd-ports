# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/pecl-gearman/Makefile 486473 2018-12-02 17:43:33Z antoine $

PORTNAME=	gearman
PORTVERSION=	1.1.2
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Gearman API

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

LICENSE=	PHP301

LIB_DEPENDS=	libgearman.so:devel/gearmand

USES=		php:pecl
CONFIGURE_ARGS=	--with-gearman
IGNORE_WITH_PHP=	70 71 72 73

.include <bsd.port.mk>
