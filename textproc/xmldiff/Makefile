# Created by: Paul Chvostek <paul+ports@it.ca>
# $FreeBSD$

PORTNAME=	xmldiff
PORTVERSION=	2.3
MASTER_SITES=	https://files.pythonhosted.org/packages/e6/1c/3dd86bec66fad3a21ac9d093610f83f6e20ad1d835ebf4079af53e65ed6b/
CATEGORIES=	textproc
DISTFILES= 	xmldiff-2.3.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Display meaningful differences between XML files

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>0:devel/py-lxml@${PY_FLAVOR}

USES=		python
USE_PYTHON=     autoplist concurrent distutils
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}coverage>=0:devel/py-coverage@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}flake8>=0:devel/py-flake8@${PY_FLAVOR}

.include <bsd.port.mk>
