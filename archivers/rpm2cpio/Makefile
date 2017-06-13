# Created by: Juergen Lock <nox@jelal.kn-bremen.de>
# $FreeBSD: head/archivers/rpm2cpio/Makefile 408590 2016-02-09 20:06:21Z ak $

PORTNAME=	rpm2cpio
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	archivers
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ak@FreeBSD.org
COMMENT=	Convert .rpm files to cpio format

LICENSE=	BSD2CLAUSE

CONFLICTS_INSTALL=	rpm4-*

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/rpm2cpio.pl \
		bin/rpm2cpio

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
# Also install as rpm2cpio.pl to not break existing scripts
	${LN} -f ${STAGEDIR}${PREFIX}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}.pl

.include <bsd.port.mk>
