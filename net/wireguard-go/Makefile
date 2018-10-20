# $FreeBSD: head/net/wireguard-go/Makefile 482339 2018-10-18 09:48:40Z decke $

PORTNAME=	wireguard-go
PORTVERSION=	0.0.20181018
CATEGORIES=	net
MASTER_SITES=	https://git.zx2c4.com/wireguard-go/snapshot/
DISTFILES=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	decke@FreeBSD.org
COMMENT=	WireGuard implementation in Go

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	go:lang/go

USES=		gmake tar:xz

USE_GITHUB=	nodefault
GH_TUPLE=	golang:crypto:e3636079e1a4:crypto/vendor/golang.org/x/crypto \
		golang:net:146acd28ed58:net/vendor/golang.org/x/net \
		golang:sys:4497e2df6f9e:sys/vendor/golang.org/x/sys

MAKE_ENV+=	GOFLAGS=-mod=vendor

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
