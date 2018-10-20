# Created by: Eric Turgeon <ericbsd@FreeBSD.org>
# $FreeBSD: head/x11/py-xcffib/Makefile 482351 2018-10-18 18:52:17Z ericbsd $

PORTNAME=	xcffib
PORTVERSION=	0.6.0
CATEGORIES=	x11 python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ericbsd@FreeBSD.org
COMMENT=	Xcffib is a replacement for xpyb, also is a XCB python binding

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libxcb.so:x11/libxcb
BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.1.0:devel/py-cffi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
