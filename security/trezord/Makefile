# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/security/trezord/Makefile 472381 2018-06-14 14:07:55Z mat $

PORTNAME=	trezord
PORTVERSION=	2.0.14
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	ale@FreeBSD.org
COMMENT=	TREZOR Communication Daemon aka TREZOR Bridge

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		go
USE_RC_SUBR=	${PORTNAME}
USE_GITHUB=	yes
GH_ACCOUNT=	trezor
GH_PROJECT=	${PORTNAME}-go
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}

PATCH_STRIP=	-p1

PLIST_FILES=	bin/${GH_PROJECT}

.include <bsd.port.mk>
