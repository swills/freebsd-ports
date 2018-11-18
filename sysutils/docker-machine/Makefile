# $FreeBSD: head/sysutils/docker-machine/Makefile 485111 2018-11-17 01:34:12Z lifanov $

PORTNAME=		docker-machine
PORTVERSION=		0.16.0
DISTVERSIONPREFIX=	v
CATEGORIES=		sysutils

MAINTAINER=		lifanov@FreeBSD.org
COMMENT=		Tool to create Docker hosts

LICENSE=		APACHE20
LICENSE_FILE=		${WRKSRC}/LICENSE

PLIST_FILES=		bin/docker-machine

USE_GITHUB=		yes

USES=	go

GH_ACCOUNT=	docker
GH_PROJECT=	machine

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}
GO_TARGET=	github.com/${GH_ACCOUNT}/${GH_PROJECT}/cmd/${PORTNAME}

.include <bsd.port.mk>
