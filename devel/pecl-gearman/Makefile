# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/pecl-gearman/Makefile 481545 2018-10-08 15:08:13Z antoine $

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
IGNORE_WITH_PHP=	70 71 72 73

.include <bsd.port.mk>
