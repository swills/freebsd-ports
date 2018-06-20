# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/devel/py-avro/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	avro
PORTVERSION=	1.8.2
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Data serialization system for python

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/src/avro/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}python-snappy>=0:archivers/py-python-snappy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}simplejson>=2.0.9:devel/py-simplejson@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
