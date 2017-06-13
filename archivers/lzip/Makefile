# Created by: Sylvio Cesar <sylvio@FreeBSD.org>
# $FreeBSD: head/archivers/lzip/Makefile 439802 2017-04-30 11:20:28Z gerald $

PORTNAME=	lzip
PORTVERSION=	1.19
CATEGORIES=	archivers
MASTER_SITES=	SAVANNAH/lzip

MAINTAINER=	gerald@FreeBSD.org
COMMENT=	Lossless data compressor based on the LZMA algorithm

LICENSE=	GPLv2

PLIST_FILES=	bin/lzip \
		man/man1/lzip.1.gz

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	CXX="${CXX}" \
		CXXFLAGS="${CXXFLAGS}" \
		LDFLAGS="${LDFLAGS}"
INSTALL_TARGET=	install-strip
INFO=		lzip

.include <bsd.port.mk>
