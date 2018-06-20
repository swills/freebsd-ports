# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/py-pudb/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pudb
PORTVERSION=	2017.1.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Full-screen, console-based Python debugger

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pygments>=1.0:textproc/py-pygments@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}urwid>=1.1.1:devel/py-urwid@${PY_FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
