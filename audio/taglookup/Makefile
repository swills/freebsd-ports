# Created by: Alex Allan <alex@kamaz.org.uk>
# $FreeBSD: head/audio/taglookup/Makefile 424762 2016-10-27 12:59:41Z amdmi3 $

PORTNAME=	taglookup
PORTVERSION=	0.2
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://www.kamaz.org.uk/taglookup/

MAINTAINER=	alex@kamaz.org.uk
COMMENT=	Utility for tagging groups of audio files using CDDB

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcddb.so:audio/libcddb \
		libtag.so:audio/taglib

USES=		pkgconfig tar:tgz

PLIST_FILES=	bin/taglookup \
		man/man1/taglookup.1.gz

.include <bsd.port.mk>
