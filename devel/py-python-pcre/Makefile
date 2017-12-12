# $FreeBSD: head/devel/py-python-pcre/Makefile 455781 2017-12-08 11:54:31Z amdmi3 $

PORTNAME=	python-pcre
DISTVERSION=	0.7
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	che@bein.link
COMMENT=	Python PCRE bindings

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/setup.py

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/python${PYTHON_VER}/site-packages/_pcre.so

.include <bsd.port.mk>
