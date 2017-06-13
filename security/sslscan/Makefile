# Created by: Matthieu BOUTHORS <matthieu@labs.fr>
# $FreeBSD: head/security/sslscan/Makefile 442970 2017-06-09 03:35:05Z gavin $

PORTNAME=	sslscan
PORTVERSION=	1.11.10
DISTVERSIONSUFFIX=	-${GH_ACCOUNT}
CATEGORIES=	security

MAINTAINER=	gavin@FreeBSD.org
COMMENT=	SSLScan is a fast SSL port scanner

LICENSE=	GPLv3

USES=		gmake ssl
USE_GITHUB=	yes
GH_ACCOUNT=	rbsec

.include <bsd.port.pre.mk>

.if ${SSL_DEFAULT:Mopenssl-devel}
BROKEN=		Does not build with openssl-devel
.endif

.include <bsd.port.post.mk>
