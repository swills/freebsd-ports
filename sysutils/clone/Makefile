# $FreeBSD$

PORTNAME=		clone
DISTVERSION=		1.0.8
DISTVERSIONPREFIX=	v
USE_GITHUB=		yes
GH_ACCOUNT=		cyclaero
GH_PROJECT=		clone
CATEGORIES=		sysutils

MAINTAINER=		cyclaero@gmail.com
COMMENT=		File tree cloning tool

LICENSE=		BSD2CLAUSE

PLIST_FILES=		bin/clone \
			man/man1/clone.1.gz

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/clone

.include <bsd.port.mk>
