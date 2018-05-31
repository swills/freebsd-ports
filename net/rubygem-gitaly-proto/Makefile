# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-gitaly-proto/Makefile 470735 2018-05-23 23:24:22Z sunpoet $

PORTNAME=	gitaly-proto
PORTVERSION=	0.100.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Protobuf specifications and client libraries for Gitaly

LICENSE=	MIT

RUN_DEPENDS=	rubygem-google-protobuf>=3.1:devel/rubygem-google-protobuf \
		rubygem-grpc>=1.10:net/rubygem-grpc

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
