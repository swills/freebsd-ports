# $FreeBSD: head/devel/py-bidict/Makefile 466511 2018-04-04 21:54:02Z wg $

PORTNAME=	bidict
PORTVERSION=	0.15.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Bidirectional map implementation and related functionality

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
