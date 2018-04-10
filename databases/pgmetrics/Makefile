# Created by: Palle Girgensohn <girgen@FreeBSD.org>
# $FreeBSD: head/databases/pgmetrics/Makefile 466860 2018-04-09 15:15:51Z girgen $

PORTNAME=	pgmetrics
PORTVERSION=	1.2.0
DISTVERSIONPREFIX=v
CATEGORIES=	databases

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	Collect and display info & stats from a running PostgreSQL server

LICENSE=	APACHE20

USE_GITHUB=	yes
GH_ACCOUNT=	rapidloop

USES=		go
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}

BUILD_AS_NON_ROOT=yes
GO_ENV+=	"CGO_ENABLED=0"

do-build:
	@cd ${GO_WRKSRC}; ${SETENV} ${MAKE_ENV} ${GO_ENV} ${GO_CMD} build -ldflags "-s -w -X main.version=${PORTVERSION}" ./cmd/${PORTNAME}

do-install:
	@cd ${GO_WRKSRC}; ${INSTALL_PROGRAM} ${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
