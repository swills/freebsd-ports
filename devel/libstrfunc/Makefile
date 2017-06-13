# Created by: Lev Walkin <vlm@lionet.info>
# $FreeBSD: head/devel/libstrfunc/Makefile 382508 2015-03-28 15:32:50Z bapt $

PORTNAME=	libstrfunc
PORTVERSION=	8.3
PORTREVISION=	2
CATEGORIES=	devel www
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}	\
		http://lionet.info/soft/

MAINTAINER=	vlm@lionet.info
COMMENT=	Handles CGI forms, MIME, templates, date conversions, etc

USES=		autoreconf libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--program-prefix=""
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
