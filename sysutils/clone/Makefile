# $FreeBSD: head/sysutils/clone/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	clone
PORTVERSION=	1.0.7
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://cyclaero.com/public/clone/

MAINTAINER=	cyclaero@gmail.com
COMMENT=	File tree cloning tool

LICENSE=	BSD2CLAUSE

USES=		compiler:c11

PLIST_FILES=	bin/clone \
		man/man1/clone.1.gz

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/clone

.include <bsd.port.mk>
