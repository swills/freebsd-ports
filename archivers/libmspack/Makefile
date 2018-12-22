# Created by: Max Khon <fjoe@FreeBSD.org>
# $FreeBSD: head/archivers/libmspack/Makefile 487227 2018-12-11 08:43:59Z fjoe $

PORTNAME=	libmspack
PORTVERSION=	0.9.1
PORTREVISION=	0
CATEGORIES=	archivers
MASTER_SITES=	http://www.cabextract.org.uk/libmspack/
DISTNAME=	${PORTNAME}-${PORTVERSION}alpha

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	Library for Microsoft compression formats

LICENSE=	LGPL21

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		cpe libtool pathfix
CPE_VENDOR=	libmspack_project
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} 's,-Wno-unused-result,,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
