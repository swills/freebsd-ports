# $FreeBSD: head/devel/chromium-gn/Makefile 448911 2017-08-29 13:05:21Z pizzamig $

CATEGORIES=	devel www
PKGNAMESUFFIX=	-gn

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Gn meta build framework

MASTERDIR=	${.CURDIR}/../../www/chromium

BUILDTYPE=	Release
NO_BUILD=	yes

PLIST=	${.CURDIR}/pkg-plist
PKGMESSAGE=	${.CURDIR}/pkg-message
DESCR=	${.CURDIR}/pkg-descr
PLIST_FILES=	bin/gn

GN_ONLY=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/out/${BUILDTYPE}/gn ${STAGEDIR}${PREFIX}/bin

.include "${MASTERDIR}/Makefile"
