# Created by: Bruce M Simpson <bms@FreeBSD.org>
# $FreeBSD: head/devel/gdbmods/Makefile 474572 2018-07-13 09:56:57Z antoine $

PORTNAME=	gdbmods
PORTVERSION=	20020824
CATEGORIES=	devel
MASTER_SITES=	https://people.freebsd.org/~gallatin/
DISTFILES=	gdbmods
DIST_SUBDIR=	${PORTNAME}-${PORTVERSION}
EXTRACT_ONLY=	# none

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Wrapper for gdb -k to provide kld symbol information

LICENSE=	NONE

DEPRECATED=	unknown license
EXPIRATION_DATE=	2018-08-15

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/gdbmods

do-install:
	${INSTALL_SCRIPT} ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES} \
		${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
