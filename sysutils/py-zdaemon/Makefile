# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/sysutils/py-zdaemon/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	zdaemon
PORTVERSION=	4.1.0
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Daemon Process Control Library and Tools for Unix-bases Systems

LICENSE=	ZPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zconfig>0:devel/py-zconfig@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
