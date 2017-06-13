# Created by: Conrad Meyer <cem@FreeBSD.org>
# $FreeBSD: head/devel/cram/Makefile 441735 2017-05-25 21:03:01Z sunpoet $

PORTNAME=	cram
PORTVERSION=	0.7
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cem@FreeBSD.org
COMMENT=	Simple testing framework for command line applications

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}check-manifest>=0:devel/py-check-manifest \
		${PYTHON_PKGNAMEPREFIX}coverage>=0:devel/py-coverage \
		${PYTHON_PKGNAMEPREFIX}pep8>=0:devel/pep8 \
		${PYTHON_PKGNAMEPREFIX}pyflakes>=0:devel/py-pyflakes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
