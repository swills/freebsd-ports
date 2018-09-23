# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: head/textproc/py-openpyxl/Makefile 480362 2018-09-22 08:22:19Z antoine $

PORTNAME=	openpyxl
PORTVERSION=	2.5.7
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Python library to read/write Excel 2007 xlsx/xlsm files

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE.rst

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}jdcal>=0:devel/py-jdcal@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}et_xmlfile>=0:textproc/py-et_xmlfile@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
