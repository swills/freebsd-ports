# $FreeBSD: head/misc/ptsort/Makefile 449259 2017-09-04 19:32:33Z des $

PORTNAME=	ptsort
PORTVERSION=	1.20170904
CATEGORIES=	misc
MASTER_SITES=	https://github.com/dag-erling/${PORTNAME}/releases/download/${PORTVERSION}/

MAINTAINER=	des@FreeBSD.org
COMMENT=	Prioritized topological sort

LICENSE=	BSD3CLAUSE

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

PLIST_FILES=	bin/${PORTNAME} man/man1/${PORTNAME}.1.gz

.include <bsd.port.mk>
