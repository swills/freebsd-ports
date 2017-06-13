# Created by: Yukihiro Nakai <Nakai@Mlab.t.u-tokyo.ac.jp>
# $FreeBSD: head/emulators/mastergear/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	mastergear
PORTVERSION=	2.0
PORTREVISION=	3
CATEGORIES=	emulators
MASTER_SITES=	http://fms.komkon.org/MG/
DISTNAME=	MG20-FreeBSD-80x86-bin
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SEGA Master System and Game Gear emulator for X

LIB_DEPENDS=	libc.so.5:misc/compat5x

NO_WRKSUBDIR=	yes
ONLY_FOR_ARCHS=	i386
USE_XORG=	x11 xext

NO_BUILD=	yes
STRIP=

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mg ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/CART.ROM ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/SF7000.ROM ${STAGEDIR}${DATADIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/MG.html ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
