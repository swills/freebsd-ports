# Created by: Dryice Liu	<dryice@dryice.name>
# $FreeBSD: head/devel/py-protocols-devel/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	PyProtocols
PORTVERSION=	1.0.a0.r2302
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	http://files.turbogears.org/eggs/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-1.0a0dev-r2302

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Protocol Definition, Declaration, and Adaptation for Python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}DecoratorTools>=1.7:devel/py-decoratortools@${FLAVOR}

USES=		python:2.7 zip
USE_PYTHON=	distutils autoplist

BROKEN=	checksum mismatch

.include <bsd.port.mk>
