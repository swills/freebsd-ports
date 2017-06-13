# Created by: Toni Gundogdu <legatvs@gmail.com>
# $FreeBSD: head/multimedia/cclive/Makefile 439934 2017-05-02 06:48:10Z jbeich $

PORTNAME=	cclive
PORTVERSION=	0.7.16
PORTREVISION=	3
CATEGORIES=	multimedia net
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION:R}

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Lightweight command line video extraction tool

LICENSE=	GPLv3

BROKEN_powerpc64=	Does not build

LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libcurl.so:ftp/curl \
		libpcre.so:devel/pcre \
		libquvi.so:multimedia/libquvi

USES=		pkgconfig tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-boost=${LOCALBASE}

PLIST_FILES=	bin/ccl \
		bin/cclive \
		man/man1/cclive.1.gz

.include <bsd.port.mk>
