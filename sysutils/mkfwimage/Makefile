# Created by: Adrian Chadd <adrian@FreeBSD.org>
# $FreeBSD: head/sysutils/mkfwimage/Makefile 446650 2017-07-26 09:01:06Z amdmi3 $

PORTNAME=	mkfwimage
DISTVERSION=	r1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/adrian
DISTNAME=	ubnt-${PORTNAME}-${DISTVERSION}

MAINTAINER=	adrian@FreeBSD.org
COMMENT=	Ubiquiti Embedded Board Image Generator

LICENSE=	GPLv2+

MAKE_ARGS+=	PREFIX=${STAGEDIR}${PREFIX}
PLIST_FILES=	bin/mkfwimage

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/mkfwimage

.include <bsd.port.mk>
