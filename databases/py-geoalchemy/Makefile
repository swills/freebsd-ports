# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/py-geoalchemy/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	geoalchemy
PORTVERSION=	0.7.2
PORTREVISION=	4
CATEGORIES=	databases geography python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	GeoAlchemy-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Using SQLAlchemy with Spatial Databases

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlalchemy12>=0.6.1:databases/py-sqlalchemy12@${PY_FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils
USES=		python:2.7

.include <bsd.port.mk>
