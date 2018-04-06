# $FreeBSD: head/archivers/py-zstd/Makefile 466502 2018-04-04 19:47:47Z yuri $

PORTNAME=	zstd
DISTVERSION=	1.3.4
CATEGORIES=	archivers python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python binding for Zstandard compression library

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libzstd.so:archivers/zstd

USES=		python localbase
USE_PYTHON=	distutils autoplist
PYDISTUTILS_BUILDARGS=	--external

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/zstd.so

.include <bsd.port.mk>
