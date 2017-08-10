# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/devel/goprotobuf/Makefile 447320 2017-08-04 06:45:27Z pi $

PORTNAME=	goprotobuf
PORTVERSION=	20170527
CATEGORIES=	devel

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Go support for Google's protocol buffers

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	protoc:devel/protobuf

USES=		go
GO_PKGNAME=	github.com/golang/protobuf
GO_TARGET=	${GO_PKGNAME}/proto \
		${GO_PKGNAME}/protoc-gen-go \
		${GO_PKGNAME}/jsonpb
USE_GITHUB=	yes
GH_ACCOUNT=	golang
GH_PROJECT=	protobuf
GH_TAGNAME=	9f174c9

.include <bsd.port.mk>
