# Created by: ijliao
# $FreeBSD: head/devel/guile-lib/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	guile-lib
PORTVERSION=	0.2.6.1
PORTREVISION=	1
CATEGORIES=	devel scheme
MASTER_SITES=	SAVANNAH

MAINTAINER=	ndowens@yahoo.com
COMMENT=	Repository of useful code written in Guile Scheme

LICENSE=	LGPL3 GPLv3
LICENSE_COMB=	multi

BROKEN_armv7=		fails to compile: stack overflow

BUILD_DEPENDS=	guile2>0:lang/guile2
RUN_DEPENDS=	guile2>0:lang/guile2

TEST_TARGET=	check
USES=		gmake pkgconfig
GNU_CONFIGURE=	yes

INFO=	guile-library

.include <bsd.port.mk>
