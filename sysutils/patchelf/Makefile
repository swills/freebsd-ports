# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/sysutils/patchelf/Makefile 444978 2017-07-03 18:39:50Z wg $

PORTNAME=	patchelf
PORTVERSION=	0.9
CATEGORIES=	sysutils

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Utility to modify the dynamic linker

LICENSE=       GPLv3+
LICENSE_FILE=  ${WRKSRC}/COPYING

USES=          autoreconf gmake
GNU_CONFIGURE= yes

USE_GITHUB=    yes
GH_ACCOUNT=    NixOS
GH_PROJECT=    patchelf

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
