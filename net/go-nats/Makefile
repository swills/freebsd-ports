# $FreeBSD: head/net/go-nats/Makefile 496313 2019-03-20 06:42:08Z tobik $

PORTNAME=	go-nats
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.0
CATEGORIES=	net

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Go client for NATS

LICENSE=	MIT

DEPRECATED=		Go libraries should not be packaged
EXPIRATION_DATE=	2019-03-31

BUILD_DEPENDS=	go-nuid>=0:devel/go-nuid

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	nats-io

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

.include <bsd.port.mk>
