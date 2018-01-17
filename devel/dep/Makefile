# $FreeBSD: head/devel/dep/Makefile 458984 2018-01-14 17:24:54Z swills $

PORTNAME=	dep
DISTVERSIONPREFIX=	v
DISTVERSION=	0.3.2
CATEGORIES=	devel

MAINTAINER=	sam.gwydir@joyent.com
COMMENT=	Prototype dependency management tool for Go

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	golang

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=	github.com/${GH_ACCOUNT}/${PORTNAME}/cmd/dep

PLIST_FILES=	bin/dep

.include <bsd.port.mk>
