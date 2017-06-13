# Created by: Ashish Shukla <wahjava@gmail.com>
# $FreeBSD: head/multimedia/msdl/Makefile 424627 2016-10-25 14:07:06Z amdmi3 $

PORTNAME=	msdl
PORTVERSION=	1.2.7r2
CATEGORIES=	multimedia
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${DISTNAME}
DISTNAME=	${PORTNAME}-${PORTVERSION:S/r/-r/}

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Streaming multimedia files downloader

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
PLIST_FILES=	bin/msdl \
		man/man1/msdl.1.gz

.include <bsd.port.mk>
