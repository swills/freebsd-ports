# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/databases/redigo/Makefile 418703 2016-07-18 13:39:17Z mat $

PORTNAME=	redigo
PORTVERSION=	1.0.0
DISTVERSIONPREFIX=	v
PORTEPOCH=	1
CATEGORIES=	databases

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Go client for the Redis database

LICENSE=	APACHE20

USE_GITHUB=	yes
GH_ACCOUNT=	garyburd
USES=		go
GO_PKGNAME=	github.com/garyburd/${PORTNAME}
GO_TARGET=	${GO_PKGNAME}/redis				\

.include <bsd.port.mk>
