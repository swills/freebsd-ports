# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: head/multimedia/libdca/Makefile 481831 2018-10-11 14:33:19Z tobik $

PORTNAME=	libdca
PORTVERSION=	0.0.6
PORTREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	http://download.videolan.org/pub/videolan/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free DTS Coherent Acoustics decoder

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool pathfix pkgconfig tar:bzip2
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
