# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/net/py-pystun/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	pystun
PORTVERSION=	0.1.0
PORTREVISION=	1
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python STUN client for getting NAT type and external IP

LICENSE=	MIT

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

post-extract:
	@${RM} -r ${WRKSRC}/tests

.include <bsd.port.mk>
