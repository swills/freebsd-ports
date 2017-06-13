# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/py-geoalchemy/Makefile 427027 2016-11-24 15:34:01Z sunpoet $

PORTNAME=	geoalchemy
PORTVERSION=	0.7.2
PORTREVISION=	2
CATEGORIES=	databases geography python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	GeoAlchemy-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Using SQLAlchemy with Spatial Databases

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlalchemy11>=0.6.1:databases/py-sqlalchemy11

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils
USES=		python:2

.include <bsd.port.mk>
