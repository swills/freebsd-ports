# Created by: Danilo Egea Gondolfo <danilo@FreeBSD.org>
# $FreeBSD: head/benchmarks/bombardier/Makefile 464866 2018-03-18 03:55:13Z yuri $

PORTNAME=	bombardier
PORTVERSION=	1.1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	benchmarks

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Fast cross-platform HTTP benchmarking tool written in Go

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	codesenberg
USES=		go

PLIST_FILES=	bin/${PORTNAME}

do-build:
	cd ${WRKSRC}; \
		${LN} -s vendor src; \
		${SETENV} ${MAKE_ENV} ${BUILD_ENV} GOPATH=${WRKSRC} go build -ldflags "-X main.version=${PORTVERSION}" .

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME}-${PORTVERSION} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
