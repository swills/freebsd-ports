# $FreeBSD: head/deskutils/fasd/Makefile 487296 2018-12-12 14:17:08Z dbn $

PORTNAME=	fasd
PORTVERSION=	1.0.1
CATEGORIES=	deskutils

MAINTAINER=	mail@dbalan.in
COMMENT=	Shell helper program to autocomplete paths faster

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	clvv

MAKE_ARGS+=	prefix=${PREFIX} \
		MANDIR=${MANPREFIX}/man

PLIST_FILES=	bin/fasd man/man1/fasd.1.gz

.include <bsd.port.mk>
