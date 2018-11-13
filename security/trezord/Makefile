# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/security/trezord/Makefile 484514 2018-11-09 14:44:36Z ale $

PORTNAME=	trezord
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.25
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

PLIST_FILES=	bin/${GH_PROJECT}

.include <bsd.port.mk>
