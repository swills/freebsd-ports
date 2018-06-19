# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-odfpy/Makefile 472430 2018-06-15 07:34:49Z yuri $

PORTNAME=	odfpy
PORTVERSION=	1.3.6
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
