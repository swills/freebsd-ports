# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-gitaly-proto088/Makefile 469442 2018-05-09 10:43:26Z mfechner $

PORTNAME=	gitaly-proto
PORTVERSION=	0.88.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	088

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Protobuf specifications and client libraries for Gitaly

LICENSE=	MIT

RUN_DEPENDS=	rubygem-google-protobuf>=3.1:devel/rubygem-google-protobuf \
		rubygem-grpc>=1.0:net/rubygem-grpc

USES=		gem
NO_ARCH=	yes
USE_RUBY=	yes

PORTSCOUT=	limit:^0\.88\.

.include <bsd.port.mk>
