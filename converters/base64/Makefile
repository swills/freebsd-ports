# Created by: will
# $FreeBSD: head/converters/base64/Makefile 469722 2018-05-12 10:10:02Z krion $

PORTNAME=	base64
PORTVERSION=	1.5
PORTREVISION=	1
CATEGORIES=	converters
MASTER_SITES=	http://www.fourmilab.ch/webtools/base64/

MAINTAINER=	nikola.lecic@anthesphoria.net
COMMENT=	Utility to encode and decode base64 files

LICENSE=	PD
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
ALL_TARGET=	prog
PLIST_FILES=	bin/base64 \
		man/man1/base64.1.gz

.include <bsd.port.mk>
