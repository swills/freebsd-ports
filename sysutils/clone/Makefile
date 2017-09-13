# $FreeBSD: head/sysutils/clone/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	clone
PORTVERSION=	1.0.7
PORTREVISION=	2
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
