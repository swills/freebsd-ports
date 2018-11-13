# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/textproc/ffe/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	ffe
DISTVERSION=	0.3.8
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/ff-extractor/ff-extractor/${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Flat file extractor

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_powerpc64=	fails to compile: unrecognized command line option "-Wmaybe-uninitialized"

USES=		makeinfo localbase
GNU_CONFIGURE=	yes

INFO=		ffe
PORTDOCS=	ffe.html
PLIST_FILES=	bin/ffe man/man1/ffe.1.gz

OPTIONS_DEFINE=		DOCS GCRYPT
GCRYPT_CONFIGURE_WITH=	libgcrypt-prefix="${LOCALBASE}"
GCRYPT_LIB_DEPENDS=	libgcrypt.so:security/libgcrypt

.include <bsd.port.mk>
