# $FreeBSD: head/sysutils/daemonize/Makefile 405163 2016-01-03 15:17:13Z miwi $

PORTNAME=	daemonize
PORTVERSION=	1.7.7
DISTVERSIONPREFIX=	release-
CATEGORIES=	sysutils

MAINTAINER=	neel@neelc.org
COMMENT=	Tool to run a command as a daemon

LICENSE=	BSD3CLAUSE

USES=		gmake
GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	bmc

PLIST_FILES=	bin/${PORTNAME} man/man1/${PORTNAME}.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
