# $FreeBSD: head/sysutils/rw/Makefile 469086 2018-05-05 05:12:28Z riggs $

PORTNAME=	rw
DISTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://sortix.org/rw/release/
DISTNAME=	rw-portable-${DISTVERSION}

MAINTAINER=	jsmith@resonatingmedia.com
COMMENT=	Simple replacement for dd wth standard command line flags

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

PLIST_FILES=	bin/rw man/man1/rw.1.gz

MAKE_ENV=	MANDIR=${MANDIRS}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
