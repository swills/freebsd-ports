# Created by: Sylvio Cesar <sylvio@FreeBSD.org>
# $FreeBSD: head/archivers/lzip/Makefile 487787 2018-12-19 08:41:53Z gerald $

PORTNAME=	lzip
PORTVERSION=	1.20
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
