# $FreeBSD: head/devel/py-bullet3/Makefile 472670 2018-06-18 03:49:09Z linimon $

PORTNAME=	bullet3
DISTVERSION=	2.87
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python version of 3D collision detection library Bullet

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BROKEN_powerpc64=	fails to compile: FontData.h:265:1: narrowing conversion of '-96' from 'int' to 'char' inside { }

USES=		compiler:c++11-lang localbase python
USE_GITHUB=	yes
GH_ACCOUNT=	bulletphysics
USE_PYTHON=	autoplist distutils
USE_GL=		gl glew

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/pybullet.so

.include <bsd.port.mk>
