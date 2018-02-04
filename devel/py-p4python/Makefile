# $FreeBSD: head/devel/py-p4python/Makefile 460728 2018-02-02 19:11:18Z asomers $

PORTNAME=	p4python
PORTVERSION=	2016.1.1447008
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	asomers@FreeBSD.org
COMMENT=	Python bindings for the Perforce API

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS+=	${LOCALBASE}/lib/perforce/libclient.a:devel/p4api
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		dos2unix python
USE_PYTHON=	distutils autoplist

post-patch:
	@${REINPLACE_CMD} -e 's:%%LOCALBASE%%:${LOCALBASE}:' ${WRKSRC}/setup.py

.include <bsd.port.mk>
