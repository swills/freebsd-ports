# Created by: George V. Neville-Neil
# $FreeBSD: head/net/py-pypcap/Makefile 464165 2018-03-11 11:21:23Z rene $

PORTNAME=	pypcap
DISTVERSION=	1.2.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simplified object-oriented Python extension module for libpcap

LICENSE=	BSD3CLAUSE

USES=		python
USE_PYTHON=	distutils cython autoplist

pre-build:
	@cd ${WRKSRC} && cython-${PYTHON_VER} pcap.pyx

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/pcap.so

.include <bsd.port.mk>
