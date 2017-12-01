# Created by: Johann Visagie <johann@egenetics.com>
# $FreeBSD: head/biology/py-biopython/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	biopython
PORTVERSION=	1.70
CATEGORIES=	biology python
MASTER_SITES=	http://www.biopython.org/DIST/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mauricio@arareko.net
COMMENT=	Collection of Python modules for bioinformatics

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USES=		python:2
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=	REPORTLAB
OPTIONS_DEFAULT=	REPORTLAB

REPORTLAB_DESC=	PDF support in Bio.Graphics module
REPORTLAB_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}reportlab1>0:print/py-reportlab1@${FLAVOR}

.include <bsd.port.mk>
