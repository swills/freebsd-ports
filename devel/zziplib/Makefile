# Created by: George Reid <greid@ukug.uk.freebsd.org>
# $FreeBSD: head/devel/zziplib/Makefile 465870 2018-03-29 08:33:25Z amdmi3 $

PORTNAME=	zziplib
PORTVERSION=	0.13.62
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}13/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library to provide transparent read access to zipped files

LICENSE=	LGPL21 MPL11
LICENSE_COMB=	dual

BUILD_DEPENDS=	zip:archivers/zip

USES=		libtool pathfix pkgconfig python:2.7,build tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_XMLTO=":"
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

PORTSCOUT=	limit:^0\.

OPTIONS_DEFINE=	SDL
OPTIONS_SUB=	yes

SDL_USE=		SDL=sdl
SDL_CONFIGURE_ENABLE=	sdl

.include <bsd.port.mk>
