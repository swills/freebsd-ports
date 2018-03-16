# Created by: Johann Visagie <johann@egenetics.com>
# $FreeBSD: head/biology/py-biopython/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	biopython
PORTVERSION=	1.70
PORTREVISION=	2
CATEGORIES=	biology python
MASTER_SITES=	http://www.biopython.org/DIST/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mauricio@arareko.net
COMMENT=	Collection of Python modules for bioinformatics

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=	REPORTLAB
OPTIONS_DEFAULT=	REPORTLAB

REPORTLAB_DESC=	PDF support in Bio.Graphics module
REPORTLAB_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}reportlab1>0:print/py-reportlab1@${FLAVOR}

.include <bsd.port.mk>
