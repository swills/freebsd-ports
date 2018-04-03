# Created by: David Naylor <naylor.b.david@gmail.com>
# $FreeBSD: head/emulators/wine-mono/Makefile 466084 2018-03-31 22:30:37Z gerald $

PORTNAME=	wine-mono
DISTVERSION=	4.7.1
CATEGORIES=	emulators
MASTER_SITES=	http://dl.winehq.org/wine/wine-mono/${DISTVERSION}/
EXTRACT_SUFX=	.msi
EXTRACT_ONLY=

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Mono .NET implementation for Wine development branch (HTML support)

LICENSE=	MIT GPLv2 LGPL20
LICENSE_COMB=	multi

PORTSCOUT=	ignore:1	# for newer versions see emulators/wine-mono-devel

NO_BUILD=	yes
PLIST_SUB+=	MONO_VERSION="${DISTVERSION}"
DATADIR=	${PREFIX}/share/wine
PLIST_FILES=	%%DATADIR%%/mono/wine-mono-%%MONO_VERSION%%.msi

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}/mono
	${INSTALL_DATA} ${DISTDIR}/wine-mono-${DISTVERSION}.msi \
		${STAGEDIR}${DATADIR}/mono

.include <bsd.port.mk>
