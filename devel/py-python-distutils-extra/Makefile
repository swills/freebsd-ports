# Created by: Ju Pengfei <jupengfei@gmail.com>
# $FreeBSD: head/devel/py-python-distutils-extra/Makefile 432661 2017-01-28 20:52:36Z sunpoet $

PORTNAME=	python-distutils-extra
PORTVERSION=	2.39
CATEGORIES=	devel python
MASTER_SITES=	https://launchpad.net/${PORTNAME}/trunk/${PORTVERSION}/+download/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Add support for i18n, documentation, and icons to distutils

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
