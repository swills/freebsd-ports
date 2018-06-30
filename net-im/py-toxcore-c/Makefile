# Created by: Yuri Victorovich
# $FreeBSD: head/net-im/py-toxcore-c/Makefile 473381 2018-06-26 10:10:03Z thierry $

PORTNAME=	toxcore-c
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.0
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	net-im net-p2p python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python binding for Project-Tox

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE.md

LIB_DEPENDS=	libtoxcore.so:net-im/tox \
		libsodium.so:security/libsodium \
		libvpx.so:multimedia/libvpx \
		libopus.so:audio/opus

USES=		localbase python
USE_GITHUB=	yes
GH_ACCOUNT=	TokTok
GH_PROJECT=	py-toxcore-c
USE_PYTHON=	distutils autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/pytox.so

.include <bsd.port.mk>
