# Created by: Steffen Fritz <steffen@fritz.wtf>
# $FreeBSD: head/sysutils/siegfried/Makefile 455497 2017-12-04 07:29:47Z tobik $

PORTNAME=		siegfried
DISTVERSIONPREFIX=	v
DISTVERSION=		1.7.8
CATEGORIES=		sysutils

MAINTAINER=		steffen@fritz.wtf
COMMENT=		File identification tool

LICENSE=		APACHE20
LICENSE_FILE=		${WRKSRC}/LICENSE.txt

PLIST_FILES=		bin/sf

USE_GITHUB=		yes
GH_ACCOUNT=		richardlehane

USES=	go

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=	github.com/${GH_ACCOUNT}/${PORTNAME}/cmd/sf

.include <bsd.port.mk>
