# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/sysutils/lscpu/Makefile 476951 2018-08-12 01:57:26Z zi $

PORTNAME=	lscpu
PORTVERSION=	1.2.0
CATEGORIES=	sysutils

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Display information about the CPU architecture

LICENSE=	BSD3CLAUSE

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	unconditionally invokes x86-specific code

USE_GITHUB=	yes
GH_ACCOUNT=	NanXiao

PLIST_FILES=	bin/${PORTNAME} man/man1/${PORTNAME}.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
