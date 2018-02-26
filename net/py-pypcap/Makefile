# Created by: George V. Neville-Neil
# $FreeBSD: head/net/py-pypcap/Makefile 462881 2018-02-24 23:41:25Z yuri $

PORTNAME=	pypcap
DISTVERSION=	1.2.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wxs@FreeBSD.org
COMMENT=	Simplified object-oriented Python extension module for libpcap

LICENSE=	BSD3CLAUSE

USES=		python
USE_PYTHON=	distutils cython autoplist

pre-build:
	@cd ${WRKSRC} && cython-${PYTHON_VER} pcap.pyx

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/pcap.so

.include <bsd.port.mk>
