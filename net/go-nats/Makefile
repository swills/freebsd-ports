# $FreeBSD: head/net/go-nats/Makefile 478459 2018-08-30 14:23:59Z olgeni $

PORTNAME=	go-nats
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.0
CATEGORIES=	net

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Go client for NATS

LICENSE=	MIT

BUILD_DEPENDS=	go-nuid>=0:devel/go-nuid

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	nats-io

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

.include <bsd.port.mk>
