# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-odfpy/Makefile 486642 2018-12-05 00:38:11Z wen $

PORTNAME=	odfpy
PORTVERSION=	1.4.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP \
		http://opendocumentfellowship.com/files/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python API and Tools to Manipulate OpenDocument Files

LICENSE=	APACHE20 GPLv2
LICENSE_COMB=	dual

CONFLICTS_BUILD=	py${PYTHON_SUFFIX}-setuptools_scm

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
