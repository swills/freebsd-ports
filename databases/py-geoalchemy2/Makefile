# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/py-geoalchemy2/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	geoalchemy2
PORTVERSION=	0.4.2
PORTREVISION=	1
CATEGORIES=	databases geography python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	GeoAlchemy2-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Using SQLAlchemy with Spatial Databases

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlalchemy12>=0.8:databases/py-sqlalchemy12@${PY_FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
