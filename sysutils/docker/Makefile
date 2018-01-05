# Created by: Nikolai Lifanov <lifanov@FreeBSD.org>
# $FreeBSD: head/sysutils/docker/Makefile 458002 2018-01-03 20:24:18Z lifanov $

PORTNAME=		docker
PORTVERSION=		17.12.0
DISTVERSIONPREFIX=	v
DISTVERSIONSUFFIX=	-ce
CATEGORIES=		sysutils

MAINTAINER=		lifanov@FreeBSD.org
COMMENT=		Open-source application container engine

LICENSE=		APACHE20

PLIST_FILES=		bin/docker

USE_GITHUB=		yes
GH_PROJECT=		docker-ce

USES=	go

GO_PKGNAME=	github.com/${PORTNAME}
GO_TARGET=	${GO_PKGNAME}/cli/cmd/docker

pre-build:
		@${MV} ${GO_WRKSRC}/components/* ${GO_WRKSRC}/

.include <bsd.port.mk>
