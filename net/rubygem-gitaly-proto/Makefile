# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-gitaly-proto/Makefile 463443 2018-03-02 18:52:50Z sunpoet $

PORTNAME=	gitaly-proto
PORTVERSION=	0.88.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Protobuf specifications and client libraries for Gitaly

LICENSE=	MIT

RUN_DEPENDS=	rubygem-google-protobuf>=3.1:devel/rubygem-google-protobuf \
		rubygem-grpc>=1.0:net/rubygem-grpc

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
