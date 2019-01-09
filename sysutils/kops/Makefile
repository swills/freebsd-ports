# Created by: Danilo Egea Gondolfo <danilo@FreeBSD.org>
# $FreeBSD: head/sysutils/kops/Makefile 489230 2019-01-03 22:17:21Z danilo $

PORTNAME=	kops
PORTVERSION=	1.11.0
CATEGORIES=	sysutils

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Kubernetes Operations

LICENSE=	APACHE20

BUILD_DEPENDS=	go-bindata:devel/go-bindata

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	kubernetes

GO_PKGNAME=	k8s.io/${PORTNAME}
GO_TARGET=	${GO_PKGNAME}/cmd/${PORTNAME}
GO_BUILDFLAGS=	-ldflags=all="-X k8s.io/kops.Version=${PORTVERSION}"

PLIST_FILES=	bin/${PORTNAME}

pre-build:
	cd ${WRKSRC} && \
		${LOCALBASE}/bin/go-bindata -o upup/models/bindata.go -pkg models \
		-prefix upup/models/ upup/models/...

.include <bsd.port.mk>
