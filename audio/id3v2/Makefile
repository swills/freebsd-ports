# Created by: David MacKenzie <djm@pix.net>
# $FreeBSD: head/audio/id3v2/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	id3v2
PORTVERSION=	0.1.12
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Command line id3v2 tag editor

LICENSE=	LGPL21

LIB_DEPENDS=	libid3.so:audio/id3lib

MAKE_JOBS_UNSAFE=	yes

PLIST_FILES=	bin/id3v2 \
		man/man1/id3v2.1.gz

.include <bsd.port.mk>
